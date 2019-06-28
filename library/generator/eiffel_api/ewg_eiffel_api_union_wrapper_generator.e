note
	description:
		"Generates Eiffel abstraction wrappers for C union types"
	library: "Eiffel Wrapper Generator Library"
	date: "$Date$"
	revision: "$Revision$"

class
	EWG_EIFFEL_API_UNION_WRAPPER_GENERATOR


inherit
	EWG_ABSTRACT_GENERATOR
		redefine
			make_internal
		end

	EWG_SHARED_TEMPLATE_EXPANDER
		export {NONE} all end

	EWG_SHARED_C_SYSTEM
		export {NONE} all end

	EWG_RENAMER
		export {NONE} all end

create

	make

feature {NONE} -- Initialization

	make_internal
		do
			Precursor
			make_printers
		end

	make_printers
		do
			create cast_printer.make (output_stream)
			cast_printer.enable_additional_pointer_indirection
		end


feature -- Generation

	generate (a_eiffel_wrapper_set: EWG_EIFFEL_WRAPPER_SET)
		local
			cs: DS_BILINEAR_CURSOR [EWG_UNION_WRAPPER]
			file_name: STRING
			file: KL_TEXT_OUTPUT_FILE
		do
			from
				cs := a_eiffel_wrapper_set.new_union_wrapper_cursor
				cs.start
			until
				cs.off
			loop
				file_name := file_system.pathname (directory_structure.eiffel_directory_name,
															  cs.item.mapped_eiffel_name.as_lower
															  + "_union_api.e")

				create file.make (file_name)
				file.recursive_open_write

				if not file.is_open_write then
					error_handler.report_cannot_write_error (file_name)
				else
					file.put_line (Generated_file_warning_eiffel_comment)
					file.put_new_line
					output_stream := file
					generate_union_wrapper (cs.item)
					file.close
				end
				cs.forth
				error_handler.tick
			end
		end

feature -- Generate Eiffel API

	generate_union_wrapper (a_union_wrapper: EWG_UNION_WRAPPER)
		local
			cs: DS_BILINEAR_CURSOR [EWG_MEMBER_WRAPPER]
		do
			output_stream.put_string ("class ")
			output_stream.put_string (a_union_wrapper.mapped_eiffel_name)
			output_stream.put_line ("_UNION_API")
			output_stream.put_new_line

				-- inheritance clause
			output_stream.put_line ("inherit")
			output_stream.put_new_line
			output_stream.put_line ("%TEWG_UNION")
			output_stream.put_new_line

				-- create clause
			output_stream.put_line ("create")
			output_stream.put_new_line
			output_stream.put_line ("%Tmake_new_unshared,")
			output_stream.put_line ("%Tmake_new_shared,")
			output_stream.put_line ("%Tmake_unshared,")
			output_stream.put_line ("%Tmake_shared")
			output_stream.put_new_line

				-- various features clause
			output_stream.put_line ("feature {NONE} -- Implementation")
			output_stream.put_new_line
			output_stream.put_line ("%Tsizeof: INTEGER ")
			output_stream.put_line ("%T%Tdo")
			output_stream.put_line ("%T%T%TResult := sizeof_external")
			output_stream.put_line ("%T%Tend")
			output_stream.put_new_line

				-- member access clause
			output_stream.put_line ("feature {ANY} -- Member Access")
			output_stream.put_new_line
			from
				cs := a_union_wrapper.members.new_cursor
				cs.start
			until
				cs.off
			loop
				generate_member (cs.item)
				cs.forth
			end

			generate_c_inline_union_wrapper (a_union_wrapper)

			output_stream.put_line ("end")
		end

	generate_member (a_union_member: EWG_MEMBER_WRAPPER)
		local
			native_wrapper: EWG_NATIVE_MEMBER_WRAPPER
		do
			native_wrapper ?= a_union_member

			if native_wrapper /= Void then
				generate_native_wrapped_member (native_wrapper.mapped_eiffel_name,
														  native_wrapper.composite_wrapper,
														  native_wrapper.c_declaration,
														  native_wrapper.header_file_name)
			else
					check
						dead_end: False
					end
			end
		end

	generate_native_wrapped_member (a_mapped_eiffel_name: STRING;
											  a_composite_wrapper: EWG_COMPOSITE_WRAPPER;
											  a_c_declaration: EWG_C_AST_DECLARATION;
											  a_header_file_name: STRING)
		require
			a_mapped_eiffel_name_not_void: a_mapped_eiffel_name /= Void
			a_mapped_eiffel_name_not_empty: not a_mapped_eiffel_name.is_empty
			a_composite_wrapper_not_void: a_composite_wrapper /= Void
			a_c_declaration_not_void: a_c_declaration /= Void
			a_header_file_name_not_void: a_header_file_name /= Void
			a_header_file_name_not_empty: not a_header_file_name.is_empty
		local
			eiffel_member_name: STRING
		do
			eiffel_member_name := eiffel_parameter_name_from_c_parameter_name (a_c_declaration.declarator)

			-- the getter
			output_stream.put_string ("%T")
			output_stream.put_string (a_mapped_eiffel_name)
			output_stream.put_string (": ")
			output_stream.put_string (a_c_declaration.type.corresponding_eiffel_type)
			output_stream.put_string (" ")
			output_stream.put_new_line

			output_stream.put_string ("%T%T%T-- Access member `")
			output_stream.put_string (a_c_declaration.declarator)
			output_stream.put_string ("'")
			output_stream.put_new_line

			output_stream.put_line ("%T%Trequire")
			output_stream.put_line ("%T%T%Texists: exists")

			output_stream.put_line ("%T%Tdo")
			output_stream.put_string ("%T%T%TResult := c_")
			output_stream.put_string (eiffel_member_name)
			output_stream.put_line (" (item)")
			output_stream.put_line ("%T%Tensure")
			output_stream.put_string ("%T%T%Tresult_correct: Result = c_")
			output_stream.put_string (eiffel_member_name)
			output_stream.put_line (" (item)")
			output_stream.put_line ("%T%Tend")
			output_stream.put_new_line

			if
				not a_c_declaration.type.skip_consts_and_aliases.is_array_type
			then
					-- the setter
				output_stream.put_string ("%Tset_")
				output_stream.put_string (a_mapped_eiffel_name)
				output_stream.put_string (" (a_value: ")
				output_stream.put_string (a_c_declaration.type.corresponding_eiffel_type)
				output_stream.put_string (") ")
				output_stream.put_new_line

				output_stream.put_string ("%T%T%T-- Set member `")
				output_stream.put_string (a_c_declaration.declarator)
				output_stream.put_string ("'")
				output_stream.put_new_line

				output_stream.put_line ("%T%Trequire")
				output_stream.put_line ("%T%T%Texists: exists")

				output_stream.put_line ("%T%Tdo")
				output_stream.put_string ("%T%T%Tset_c_")
				output_stream.put_string (eiffel_member_name)
				output_stream.put_line (" (item, a_value)")
				if
					not (a_c_declaration.type.skip_consts_and_aliases.is_struct_type or
						  a_c_declaration.type.skip_consts_and_aliases.is_union_type)
				then
					output_stream.put_line ("%T%Tensure")
					output_stream.put_string ("%T%T%Ta_value_set: a_value = ")
					output_stream.put_line (a_mapped_eiffel_name)
				end

				output_stream.put_line ("%T%Tend")
				output_stream.put_new_line
			end

			if a_c_declaration.type.skip_consts_and_aliases.is_callback then
				-- the function caller
				output_stream.put_line ("-- TODO: function pointers not yet callable from")
				output_stream.put_line ("--%T%Tunion, use corresponding callback class instead")
			end
		end


feature -- Generate Eiffel Low level C API.

	generate_c_inline_union_wrapper (a_union_wrapper: EWG_UNION_WRAPPER)
		local
			c_declaration_printer: EWG_C_DECLARATION_PRINTER
			eiffel_to_c_cast_printer: EWG_EIFFEL_TO_C_TYPE_CAST_PRINTER
			type_name: STRING
			escaped_union_name: STRING
			cs: DS_BILINEAR_CURSOR [EWG_C_AST_DECLARATION]
			cast_with_one_pointer_indirection: STRING
		do
			create type_name.make (20)
			create c_declaration_printer.make_string (type_name)
			c_declaration_printer.print_declaration_from_type (a_union_wrapper.c_union_type, "")

			escaped_union_name := clone (type_name)
			escape_type_name_to_be_c_identifier (escaped_union_name)


			output_stream.put_string ("feature {NONE} --C Implementation: ")
			output_stream.put_string (type_name)
			output_stream.put_new_line
			output_stream.put_new_line

			if a_union_wrapper.c_union_type.is_complete then
				generate_sizeof_feature (a_union_wrapper.header_file_name,
												 type_name,
												 escaped_union_name)
			else
				-- What shall I do? I simply cant find out the size of an incomplete union
				-- TODO: Either don't wrap incomplete unions, or add a notion of completeness in wrapper
				-- that will be a precondition to `sizeof_external'. Or something similar...
				-- TODO: integrate this into `generate_sizeof_feature'
				output_stream.put_line ("%Tsizeof_external: INTEGER ")
				output_stream.put_line ("%T%Tdo")
				output_stream.put_line ("%T%T%Tcheck")
				output_stream.put_line ("%T%T%T%Tsize_not_known: False")
				output_stream.put_line ("%T%T%Tend")
				output_stream.put_line ("%T%Tend")
			end
			output_stream.put_new_line

			create cast_with_one_pointer_indirection.make (20)
			create eiffel_to_c_cast_printer.make_string (cast_with_one_pointer_indirection, eiffel_compiler_mode)
			eiffel_to_c_cast_printer.print_declaration_from_type (a_union_wrapper.c_union_type, "")

			-- member access
			if a_union_wrapper.c_union_type.is_complete then
				from
					cs := a_union_wrapper.c_union_type.members.new_cursor
					cs.start
				until
					cs.off
				loop
					if
						not (cs.item.type.skip_consts_and_aliases.is_composite_type and
							not cs.item.type.is_named_recursive)
					then
						-- For now we do not handle anonymous nested composite types
						generate_member_getter (cs.item,
														escaped_union_name,
														a_union_wrapper.header_file_name,
														type_name,
														cast_with_one_pointer_indirection)
						if not cs.item.type.skip_consts_and_aliases.is_array_type then
							generate_member_setter (cs.item,
															escaped_union_name,
															a_union_wrapper.header_file_name,
															type_name,
															cast_with_one_pointer_indirection)
						end
					end
					cs.forth
				end
			end

			output_stream.put_new_line
		end

	generate_member_getter (a_union_member: EWG_C_AST_DECLARATION;
									an_escaped_union_name: STRING;
									a_header_file_name: STRING;
									a_declaration: STRING;
									a_cast_with_one_pointer_indirection: STRING)
		require
			a_union_member_not_void: a_union_member /= Void
			an_escaped_union_name_not_void: an_escaped_union_name /= Void
			a_declaration_not_void: a_declaration /= Void
			a_cast_with_one_pointer_indirection_not_void: a_cast_with_one_pointer_indirection /= Void
		local
			eiffel_member_name: STRING
		do
			eiffel_member_name := eiffel_parameter_name_from_c_parameter_name (a_union_member.declarator)
			output_stream.put_string ("%Tc_")
			output_stream.put_string (eiffel_member_name)
			output_stream.put_string (" (an_item: POINTER): ")
			output_stream.put_string (a_union_member.type.corresponding_eiffel_type)
			output_stream.put_line (" ")
			output_stream.put_line ("%T%Trequire")
			output_stream.put_line ("%T%T%Tan_item_not_null: an_item /= default_pointer")
			output_stream.put_line ("%T%Texternal")

			generate_inline_union_wrapper (a_header_file_name)

			output_stream.put_line ("%T%Talias")
			output_stream.put_line ("%T%T%T%"[")
			output_stream.put_string ("%T%T%T%T")
			if
				a_union_member.type.skip_consts_and_aliases.is_struct_type or
					a_union_member.type.skip_consts_and_aliases.is_union_type
			then
				output_stream.put_character ('&')
			end
			output_stream.put_string ("(")
			output_stream.put_string (a_cast_with_one_pointer_indirection)
			output_stream.put_string ("$an_item)->")
			output_stream.put_line (a_union_member.declarator)
			output_stream.put_line ("%T%T%T]%"")

			output_stream.put_line ("%T%Tend")
			output_stream.put_new_line

		end

	generate_member_setter (a_union_member: EWG_C_AST_DECLARATION;
									an_escaped_union_name: STRING;
									a_header_file_name: STRING;
									a_declaration: STRING;
									a_cast_with_one_pointer_indirection: STRING)
		require
			a_union_member_not_void: a_union_member /= Void
			an_escaped_union_name_not_void: an_escaped_union_name /= Void
			a_declaration_not_void: a_declaration /= Void
			a_cast_with_one_pointer_indirection_not_void: a_cast_with_one_pointer_indirection /= Void
			not_array: not a_union_member.type.skip_consts_and_aliases.is_array_type
		local
			eiffel_member_name: STRING
			eiffel_to_c_cast_printer: EWG_EIFFEL_TO_C_TYPE_CAST_PRINTER
		do
			eiffel_member_name := eiffel_parameter_name_from_c_parameter_name (a_union_member.declarator)
			output_stream.put_string ("%Tset_c_")
			output_stream.put_string (eiffel_member_name)
			output_stream.put_string (" (an_item: POINTER; a_value: ")
			output_stream.put_string (a_union_member.type.corresponding_eiffel_type)
			output_stream.put_line (") ")
			output_stream.put_line ("%T%Trequire")
			output_stream.put_line ("%T%T%Tan_item_not_null: an_item /= default_pointer")
			output_stream.put_line ("%T%Texternal")

			generate_inline_union_wrapper (a_header_file_name)

				-- To be updated
			output_stream.put_line ("%T%Talias")
			output_stream.put_string ("%T%T%T%"[")
			output_stream.put_string ("%N%T%T%T%T(")
			output_stream.put_string (a_cast_with_one_pointer_indirection)
			output_stream.put_string ("$an_item)->")
			output_stream.put_string (a_union_member.declarator)
			output_stream.put_string (" = ")
			output_stream.put_character (' ')
			if
				a_union_member.type.skip_consts_and_aliases.is_struct_type or
					a_union_member.type.skip_consts_and_aliases.is_union_type
			then
				output_stream.put_character ('*')
			end
			create eiffel_to_c_cast_printer.make (output_stream, eiffel_compiler_mode)
			eiffel_to_c_cast_printer.print_declaration_from_type (a_union_member.type, "")
			output_stream.put_line ("$a_value;")
			output_stream.put_line ("%T%T%T]%"")

			output_stream.put_line ("%T%Tend")
			output_stream.put_new_line
		end

	generate_sizeof_feature (a_header_file_name: STRING;
									 a_type_name: STRING;
									 an_escaped_union_name: STRING)
		require
			a_header_file_name_not_void: a_header_file_name /= Void
			a_type_name_not_void: a_type_name /= Void
			an_escaped_union_name_not_void: an_escaped_union_name /= Void
		do
			output_stream.put_line ("%Tsizeof_external: INTEGER ")
			output_stream.put_line ("%T%Texternal")

			generate_inline_union_wrapper (a_header_file_name)

			output_stream.put_line ("%T%Talias")
			output_stream.put_string ("%T%T%T%"sizeof(")
			output_stream.put_string (a_type_name)
			output_stream.put_line (")%"")
			output_stream.put_line ("%T%Tend")
		end

	generate_inline_union_wrapper (a_header_file_name: STRING)
		require
			a_header_file_name_not_void: a_header_file_name /= Void
		do
			output_stream.put_string ("%T%T%T%"C inline use <")
			output_stream.put_string (a_header_file_name)
			output_stream.put_string (">%"")
			output_stream.put_new_line
		end

	cast_printer: EWG_C_TYPE_CAST_PRINTER

invariant

	cast_printer_not_void: cast_printer /= Void

end
