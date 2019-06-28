note
	description:
		"Generates Eiffel API wrappers for function declarations"
	date: "$Date$"
	revision: "$Revision$"

class
	EWG_EIFFEL_API_FUNCTION_WRAPPER_GENERATOR


inherit

	EWG_ABSTRACT_GENERATOR

	EWG_SHARED_C_SYSTEM
		export {NONE} all end

	EWG_RENAMER
		export {NONE} all end

create

	make


feature {NONE} -- Implementation

	make_printers
		once
			create c_to_eiffel_declaration_printer.make (output_stream, eiffel_compiler_mode)
			create casted_declarator_printer.make (output_stream)
			create eiffel_to_c_indirection_printer.make (output_stream, eiffel_compiler_mode)
			create eiffel_to_c_cast_printer.make (output_stream, eiffel_compiler_mode)
			create declarator_printer.make (output_stream)
			casted_declarator_printer.add_printer (eiffel_to_c_indirection_printer)
			casted_declarator_printer.add_printer (eiffel_to_c_cast_printer)
			casted_declarator_printer.add_printer (declarator_printer)
			create eiffel_to_c_parameter_list_printer.make (output_stream, casted_declarator_printer)
			eiffel_to_c_parameter_list_printer.set_declarator_prefix ("$")
			create c_declaration_printer.make (output_stream)
			create c_cast_printer.make (output_stream)
		end

feature -- Generation

	generate (a_eiffel_wrapper_set: EWG_EIFFEL_WRAPPER_SET)
		local
			cs: DS_HASH_TABLE_CURSOR [DS_LINKED_LIST [EWG_FUNCTION_WRAPPER], STRING]
		do
			from
				cs := a_eiffel_wrapper_set.new_function_wrapper_groups_cursor
				cs.start
			until
				cs.off
			loop
				generate_function_wrappers_for_class (cs.key, cs.item)
				cs.forth
			end
		end

feature {NONE} -- Implementation

	generate_function_wrappers_for_class (a_class_name: STRING;
											a_function_declaration_list: DS_LINKED_LIST [EWG_FUNCTION_WRAPPER])
		require
			a_class_name_not_void: a_class_name /= Void
			a_function_declaration_list_not_void: a_function_declaration_list /= Void
			a_function_declaration_list_not_empty: a_function_declaration_list.count > 0
			a_function_declaration_list_not_has_void: not a_function_declaration_list.has (Void)
		local
			cs: DS_LINKED_LIST_CURSOR [EWG_FUNCTION_WRAPPER]
			class_name: STRING
			file_name: STRING
			file: KL_TEXT_OUTPUT_FILE
		do
			class_name :=  a_class_name.twin + "_API"

			file_name := file_system.pathname (directory_structure.eiffel_directory_name, class_name.as_lower + ".e")
			create file.make (file_name)
			file.recursive_open_write
			if file.is_open_write then
				file.put_line (Generated_file_warning_eiffel_comment)
				file.put_line ("-- functions wrapper")
				file.put_line ("class " + class_name)
				file.put_new_line
				file.put_new_line
				file.put_line ("feature -- Access")
				file.put_new_line
				output_stream := file
				from
					cs := a_function_declaration_list.new_cursor
					cs.start
				until
					cs.off
				loop
					generate_function_wrapper (cs.item)
					cs.forth
					error_handler.tick
				end
				generate_c_inline_function_wrappers_for_class (a_function_declaration_list)
				file.put_line ("end")
				file.close
			else
				error_handler.report_cannot_write_error (file_name)
			end
		end

	generate_function_wrapper (a_function_wrapper: EWG_FUNCTION_WRAPPER)
		require
			a_function_wrapper_not_void: a_function_wrapper /= Void
		do
			generate_function_accessor (a_function_wrapper)
		end

feature {NONE} -- Generate Eiffel High Level Access

	generate_function_accessor (a_function_wrapper: EWG_FUNCTION_WRAPPER)
		require
			a_function_wrapper_not_void: a_function_wrapper /= Void
		do
				-- TODO: We ignore functions with struct or union return type for now
				-- later this problem will be taken care of in the C glue code layer
			if
				a_function_wrapper.function_declaration.function_type.return_type.skip_consts_and_aliases.is_struct_type or
					a_function_wrapper.function_declaration.function_type.return_type.skip_consts_and_aliases.is_union_type
			then
				-- For now we do not support unions or structs as return types to functions
				output_stream.put_line ("-- Ignoring " + a_function_wrapper.mapped_eiffel_name + " since its return type is a composite type")
			else
				generate_routine_signature (a_function_wrapper)

				generate_locals (a_function_wrapper)

				output_stream.put_string ("%T%Tdo")
				output_stream.put_new_line

				generate_routine_call_preparation (a_function_wrapper)

				if
					a_function_wrapper.function_declaration.function_type.return_type.skip_consts_and_aliases /=
					c_system.types.void_type
				then
					output_stream.put_string ("%T%T%TResult := ")
				else
					output_stream.put_string ("%T%T%T")
				end

				generate_routine_call (a_function_wrapper)

				output_stream.put_line ("%T%Tend")
			end
			output_stream.put_new_line
		end

	generate_routine_signature (a_function_wrapper: EWG_FUNCTION_WRAPPER)
		require
			a_function_wrapper_not_void: a_function_wrapper /= Void
		local
			cs: DS_BILINEAR_CURSOR [EWG_MEMBER_WRAPPER]
			native_member_wrapper: EWG_NATIVE_MEMBER_WRAPPER
			zero_terminated_string_member_wrapper: EWG_ZERO_TERMINATED_STRING_MEMBER_WRAPPER
		do
			output_stream.put_string ("%T" + a_function_wrapper.mapped_eiffel_name)

			if a_function_wrapper.function_declaration.function_type.members.count > 0 then
				output_stream.put_character (' ')
				output_stream.put_character ('(')
				from
					cs := a_function_wrapper.members.new_cursor
					cs.start
				until
					cs.off
				loop
					native_member_wrapper ?= cs.item
					if native_member_wrapper /= Void then
						generate_signature_parameter_for_native_member_wrapper (native_member_wrapper)
					end
					zero_terminated_string_member_wrapper ?= cs.item
					if zero_terminated_string_member_wrapper /= Void then
						generate_signature_parameter_for_zero_terminated_string_member_wrapper (zero_terminated_string_member_wrapper)
					end
					if not cs.is_last then
						output_stream.put_string ("; ")
					end
					cs.forth
				end
				output_stream.put_character (')')
			end

			if a_function_wrapper.function_declaration.function_type.return_type.skip_consts_and_aliases /= c_system.types.void_type then
				output_stream.put_string (": ")
				output_stream.put_string (a_function_wrapper.function_declaration.function_type.return_type.corresponding_eiffel_type)
			end
			output_stream.put_string (" ")
			output_stream.put_new_line
		end

	generate_signature_parameter_for_native_member_wrapper (a_native_member_wrapper: EWG_NATIVE_MEMBER_WRAPPER)
		require
			a_native_member_wrapper_not_void: a_native_member_wrapper /= Void
		do
			output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
			output_stream.put_string (": ")
			output_stream.put_string (a_native_member_wrapper.eiffel_type)
		end

	generate_signature_parameter_for_zero_terminated_string_member_wrapper (a_zero_terminated_string_member_wrapper: EWG_ZERO_TERMINATED_STRING_MEMBER_WRAPPER)
		require
			a_zero_terminated_string_member_wrapper_not_void: a_zero_terminated_string_member_wrapper /= Void
		do
			output_stream.put_string (a_zero_terminated_string_member_wrapper.mapped_eiffel_name)
			output_stream.put_string (": ")
			output_stream.put_string (a_zero_terminated_string_member_wrapper.eiffel_type)
		end

feature {NONE} -- Generate Eiffel Routine calls

	generate_routine_call (a_function_wrapper: EWG_FUNCTION_WRAPPER)
		require
			a_function_wrapper_not_void: a_function_wrapper /= Void
		local
			cs: DS_BILINEAR_CURSOR [EWG_MEMBER_WRAPPER]
			native_member_wrapper: EWG_NATIVE_MEMBER_WRAPPER
			zero_terminated_string_member_wrapper: EWG_ZERO_TERMINATED_STRING_MEMBER_WRAPPER
		do
			output_stream.put_string ("c_" +a_function_wrapper.mapped_eiffel_name )

			if a_function_wrapper.function_declaration.function_type.members.count > 0 then
				output_stream.put_character (' ')
				output_stream.put_character ('(')
				from
					cs := a_function_wrapper.members.new_cursor
					cs.start
				until
					cs.off
				loop
					native_member_wrapper ?= cs.item
					if native_member_wrapper /= Void then
						generate_routine_call_parameter_for_native_member_wrapper (native_member_wrapper)
					end
					zero_terminated_string_member_wrapper ?= cs.item
					if zero_terminated_string_member_wrapper /= Void then
						generate_routine_call_parameter_for_zero_terminated_string_member_wrapper (zero_terminated_string_member_wrapper)
					end
					if not cs.is_last then
						output_stream.put_string (", ")
					end
					cs.forth
				end
				output_stream.put_character (')')
			end
			output_stream.put_new_line
		end

	generate_routine_call_parameter_for_native_member_wrapper (a_native_member_wrapper: EWG_NATIVE_MEMBER_WRAPPER)
		require
			a_native_member_wrapper_not_void: a_native_member_wrapper /= Void
		do
			output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
		end

	generate_routine_call_parameter_for_zero_terminated_string_member_wrapper (a_zero_terminated_string_member_wrapper: EWG_ZERO_TERMINATED_STRING_MEMBER_WRAPPER)
		require
			a_zero_terminated_string_member_wrapper_not_void: a_zero_terminated_string_member_wrapper /= Void
		do
			output_stream.put_string (a_zero_terminated_string_member_wrapper.mapped_eiffel_name)
			output_stream.put_string ("_c_string.item")
		end

feature {NONE} -- Eiffel to C call preparation

	generate_routine_call_preparation (a_function_wrapper: EWG_FUNCTION_WRAPPER)
		require
			a_function_wrapper_not_void: a_function_wrapper /= Void
		local
			cs: DS_BILINEAR_CURSOR [EWG_MEMBER_WRAPPER]
			native_member_wrapper: EWG_NATIVE_MEMBER_WRAPPER
			zero_terminated_string_member_wrapper: EWG_ZERO_TERMINATED_STRING_MEMBER_WRAPPER
		do
			if a_function_wrapper.function_declaration.function_type.members.count > 0 then
				from
					cs := a_function_wrapper.members.new_cursor
					cs.start
				until
					cs.off
				loop
					native_member_wrapper ?= cs.item
					if native_member_wrapper /= Void then
						generate_routine_call_preparation_for_native_member_wrapper (native_member_wrapper)
					end
					zero_terminated_string_member_wrapper ?= cs.item
					if zero_terminated_string_member_wrapper /= Void then
						generate_routine_call_preparation_for_zero_terminated_string_member_wrapper (zero_terminated_string_member_wrapper)
					end
					cs.forth
				end
			end
		end

	generate_routine_call_preparation_for_native_member_wrapper (a_native_member_wrapper: EWG_NATIVE_MEMBER_WRAPPER)
		require
			a_native_member_wrapper_not_void: a_native_member_wrapper /= Void
		do
			-- Nothing to do
		end

	generate_routine_call_preparation_for_zero_terminated_string_member_wrapper (a_zero_terminated_string_member_wrapper: EWG_ZERO_TERMINATED_STRING_MEMBER_WRAPPER)
		require
			a_zero_terminated_string_member_wrapper_not_void: a_zero_terminated_string_member_wrapper /= Void
		do
			output_stream.put_string ("%T%T%Tcreate ")
			output_stream.put_string (a_zero_terminated_string_member_wrapper.mapped_eiffel_name)
			output_stream.put_string ("_c_string.make_shared_from_string (")
			output_stream.put_string (a_zero_terminated_string_member_wrapper.mapped_eiffel_name)
			output_stream.put_string (")")
			output_stream.put_new_line
		end

feature {NONE} -- Generate Eiffel locals

	generate_locals (a_function_wrapper: EWG_FUNCTION_WRAPPER)
		require
			a_function_wrapper_not_void: a_function_wrapper /= Void
		local
			cs: DS_BILINEAR_CURSOR [EWG_MEMBER_WRAPPER]
			native_member_wrapper: EWG_NATIVE_MEMBER_WRAPPER
			zero_terminated_string_member_wrapper: EWG_ZERO_TERMINATED_STRING_MEMBER_WRAPPER
		do
			output_stream.put_string ("%T%Tlocal")
			output_stream.put_new_line
			if a_function_wrapper.function_declaration.function_type.members.count > 0 then
				from
					cs := a_function_wrapper.members.new_cursor
					cs.start
				until
					cs.off
				loop
					native_member_wrapper ?= cs.item
					if native_member_wrapper /= Void then
						generate_local_for_native_member_wrapper (native_member_wrapper)
					end
					zero_terminated_string_member_wrapper ?= cs.item
					if zero_terminated_string_member_wrapper /= Void then
						generate_local_for_zero_terminated_string_member_wrapper (zero_terminated_string_member_wrapper)
					end
					cs.forth
				end
			end
		end

	generate_local_for_native_member_wrapper (a_native_member_wrapper: EWG_NATIVE_MEMBER_WRAPPER)
		require
			a_native_member_wrapper_not_void: a_native_member_wrapper /= Void
		do
			-- Nothing to do
		end

	generate_local_for_zero_terminated_string_member_wrapper (a_zero_terminated_string_member_wrapper: EWG_ZERO_TERMINATED_STRING_MEMBER_WRAPPER)
		require
			a_zero_terminated_string_member_wrapper_not_void: a_zero_terminated_string_member_wrapper /= Void
		do
			output_stream.put_string ("%T%T%T")
			output_stream.put_string (a_zero_terminated_string_member_wrapper.mapped_eiffel_name)
			output_stream.put_string ("_c_string: EWG_ZERO_TERMINATED_STRING")
			output_stream.put_new_line
		end


feature {NONE} -- Generate Eiffel to C inline code.	

	generate_c_inline_function_wrappers_for_class (a_function_declaration_list: DS_LINKED_LIST [EWG_FUNCTION_WRAPPER])
		require
			a_function_declaration_list_not_void: a_function_declaration_list /= Void
			a_function_declaration_list_not_empty: a_function_declaration_list.count > 0
			a_function_declaration_list_not_has_void: not a_function_declaration_list.has (Void)
		local
			cs: DS_LINKED_LIST_CURSOR [EWG_FUNCTION_WRAPPER]
			class_name: STRING
			file_name: STRING
			file: KL_TEXT_OUTPUT_FILE
		do
			output_stream.put_line ("feature -- Externals")
			from
				cs := a_function_declaration_list.new_cursor
				cs.start
			until
				cs.off
			loop
				generate_c_inline_function_accessor (cs.item)
				cs.forth
				error_handler.tick
			end
		end


	generate_c_inline_function_accessor (a_function_wrapper: EWG_FUNCTION_WRAPPER)
		require
			a_function_wrapper_not_void: a_function_wrapper /= Void
		local
			cs: DS_BILINEAR_CURSOR [EWG_C_AST_DECLARATION]
			parameter_name_generator: EWG_UNIQUE_NAME_GENERATOR
			is_problematic_result: BOOLEAN
			function_type: EWG_C_AST_FUNCTION_TYPE
		do
			function_type := a_function_wrapper.function_declaration.function_type
			output_stream.put_string ("%Tc_" + a_function_wrapper.mapped_eiffel_name )

			if function_type.members.count > 0 then
				output_stream.put_string (" (")
				from
					cs := function_type.members.new_cursor
					cs.start
				until
					cs.off
				loop
					if cs.item.is_anonymous then
						if parameter_name_generator = Void then
							create parameter_name_generator.make ("anonymous_")
							parameter_name_generator.set_output_stream (output_stream)
						end
						parameter_name_generator.generate_new_name
					else
						append_eiffel_parameter_name_from_c_parameter_name_to_stream (output_stream, cs.item.declarator)
					end
					output_stream.put_string (": ")
					output_stream.put_string (cs.item.type.corresponding_eiffel_type)
					if not cs.is_last then
						output_stream.put_string ("; ")
					end
					cs.forth
				end
				output_stream.put_character (')')
			end

			if function_type.return_type.skip_consts_and_aliases /= c_system.types.void_type then
				output_stream.put_string (": ")
				output_stream.put_string (function_type.return_type.corresponding_eiffel_type)
			end
			output_stream.put_new_line

			output_stream.put_line ("%T%Texternal")

			is_problematic_result := function_type.return_type.skip_consts_and_aliases.is_struct_type or
				function_type.return_type.skip_consts_and_aliases.is_union_type

			if eiffel_compiler_mode.is_ise_mode then
				if is_problematic_result then
					generate_ise_indirect_external_clause (a_function_wrapper)
				else
					generate_ise_direct_external_clause (a_function_wrapper)
				end
			else
					check
						dead_end: False
					end
			end
			output_stream.put_line ("%T%Tend")

			output_stream.put_new_line
		end

	generate_ise_indirect_external_clause (a_function_wrapper: EWG_FUNCTION_WRAPPER)
		require
			a_function_wrapper_not_void: a_function_wrapper /= Void
		local
			declaration_printer: EWG_C_ISE_EXTERNAL_DECLARATION_PRINTER
			declaration_list_printer: EWG_C_DECLARATION_LIST_PRINTER
			function_type: EWG_C_AST_FUNCTION_TYPE
			return_type_printer: EWG_C_TO_EIFFEL_DECLARATION_PRINTER
		do
			function_type := a_function_wrapper.function_declaration.function_type
			create declaration_printer.make (output_stream)
			create declaration_list_printer.make (output_stream, declaration_printer)
			create return_type_printer.make (output_stream, eiffel_compiler_mode)

				-- ISE external clause
			generate_inline_function_wrapper (a_function_wrapper)

			output_stream.put_new_line

			output_stream.put_line ("%T%Talias")
			output_stream.put_line ("%T%T%T%"[")
			generate_call (a_function_wrapper)
			output_stream.put_line ("%T%T%T]%"")
		end

  generate_ise_direct_external_clause (a_function_wrapper: EWG_FUNCTION_WRAPPER)
		require
			a_function_wrapper_not_void: a_function_wrapper /= Void
		local
			declaration_printer: EWG_C_ISE_EXTERNAL_DECLARATION_PRINTER
			declaration_list_printer: EWG_C_DECLARATION_LIST_PRINTER
			function_type: EWG_C_AST_FUNCTION_TYPE
			return_type_printer: EWG_C_ANONYMOUS_DECLARATION_PRINTER
		do
			function_type := a_function_wrapper.function_declaration.function_type
			create declaration_printer.make (output_stream)
			create declaration_list_printer.make (output_stream, declaration_printer)
			create return_type_printer.make (output_stream)

				-- ISE external clause
			generate_inline_function_wrapper (a_function_wrapper)

			output_stream.put_line ("%T%Talias")
			output_stream.put_line ("%T%T%T%"[")
			generate_call (a_function_wrapper)
			output_stream.put_line ("%T%T%T]%"")
		end


	generate_inline_function_wrapper (a_function_wrapper: EWG_FUNCTION_WRAPPER)
		require
			a_function_wrapper_not_void: a_function_wrapper /= Void
		do
			output_stream.put_string ("%T%T%T%"C inline use <")
			output_stream.put_string (a_function_wrapper.header_file_name)
			output_stream.put_string (">%"")
			output_stream.put_new_line
		end


	generate_call (a_function_wrapper: EWG_FUNCTION_WRAPPER)
			-- Generate a call to `a_function_wrapper'.
		require
			a_function_wrapper_not_void: a_function_wrapper /= Void
		local
			function_type: EWG_C_AST_FUNCTION_TYPE
			needs_return: BOOLEAN
			pointer: EWG_C_AST_POINTER_TYPE
		do
			make_printers
			function_type := a_function_wrapper.function_declaration.function_type
			output_stream.put_string ("%T%T%T%T")
			needs_return := function_type.return_type.skip_consts_and_aliases /= c_system.types.void_type
			if needs_return then
				if
					function_type.return_type.skip_consts_and_aliases.is_struct_type or
						function_type.return_type.skip_consts_and_aliases.is_union_type
				then
					create pointer.make (function_type.return_type.header_file_name, function_type.return_type)
					c_declaration_printer.print_declaration_from_type (pointer, "result")
					output_stream.put_string (" = ")
					c_cast_printer.print_declaration_from_type (pointer, "")
					output_stream.put_string (" malloc (sizeof(")
					c_declaration_printer.print_declaration_from_type (function_type.return_type, "")
					output_stream.put_line ("));")
					output_stream.put_string ("%T*result = ")
				else
					output_stream.put_string ("return ")
				end
			end
			output_stream.put_string (a_function_wrapper.function_declaration.declarator)
			output_stream.put_string (" (")
			if function_type.members.count > 0 then
				eiffel_to_c_parameter_list_printer.print_declaration_list (function_type.members)
			end
			output_stream.put_character (')')
			if needs_return then
				if
					function_type.return_type.skip_consts_and_aliases.is_struct_type or
						function_type.return_type.skip_consts_and_aliases.is_union_type
				then
					output_stream.put_line (";")
					output_stream.put_string ("%Treturn result")
				end
			end
			output_stream.put_character (';')
			output_stream.put_new_line
		end

feature {NONE} -- Helper formatters

	c_to_eiffel_declaration_printer: EWG_C_TO_EIFFEL_DECLARATION_PRINTER
	eiffel_to_c_declaration_printer: EWG_EIFFEL_TO_C_DECLARATION_PRINTER
	eiffel_to_c_declaration_list_printer: EWG_C_DECLARATION_LIST_PRINTER
	casted_declarator_printer: EWG_COMPOSITE_DECLARATION_PRINTER
	eiffel_to_c_indirection_printer: EWG_EIFFEL_TO_C_INDIRECTION_PRINTER
	eiffel_to_c_cast_printer: EWG_EIFFEL_TO_C_TYPE_CAST_PRINTER
	declarator_printer: EWG_C_DECLARATOR_PRINTER
	eiffel_to_c_parameter_list_printer: EWG_C_DECLARATION_LIST_PRINTER
	c_declaration_printer: EWG_C_DECLARATION_PRINTER
	c_cast_printer: EWG_C_TYPE_CAST_PRINTER

end

