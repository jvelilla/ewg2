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

	EWG_EIFFEL_API_SHARED
		export {NONE} all end


create

	make


feature {NONE} -- Implementation

	make_printers
		do
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
			if is_function_accessor_simple (a_function_wrapper) then
				generate_c_inline_function_accessor (a_function_wrapper, False)
			else
				generate_function_accessor (a_function_wrapper)
			end
		end

feature {NONE} -- Generate Eiffel High Level Access

	is_function_accessor_simple (a_function_wrapper: EWG_FUNCTION_WRAPPER): BOOLEAN
		require
			a_function_wrapper_not_void: a_function_wrapper /= Void
		local
			cs: DS_BILINEAR_CURSOR [EWG_MEMBER_WRAPPER]
			native_member_wrapper: EWG_NATIVE_MEMBER_WRAPPER
			pimitive : EWG_C_AST_PRIMITIVE_TYPE
			flag: BOOLEAN
			l_item: EWG_MEMBER_WRAPPER
		do
			if a_function_wrapper.function_declaration.function_type.members.count > 0 then
				Result := True
				from
					cs := a_function_wrapper.members.new_cursor
					cs.start
				until
					cs.off or flag
				loop
					l_item  := cs.item
					native_member_wrapper ?= cs.item
					if attached {EWG_ZERO_TERMINATED_STRING_MEMBER_WRAPPER} l_item then
						flag := True
						Result := False
					elseif attached {EWG_NATIVE_MEMBER_WRAPPER} l_item then
						Result := is_basic_primitive_type (native_member_wrapper)
						flag := not Result
					else
						flag := True
						Result := False
					end
					cs.forth
				end
					-- Todo check other types of returns
			elseif a_function_wrapper.function_declaration.function_type.return_type.skip_consts_and_aliases /= c_system.types.void_type then
				if attached {EWG_C_AST_STRUCT_TYPE} a_function_wrapper.function_declaration.function_type.return_type as l_struct then
					Result := False
				elseif attached {EWG_C_AST_UNION_TYPE} a_function_wrapper.function_declaration.function_type.return_type as l_union then
					Result := False
				else
					Result := True
				end
			else
				Result := True
			end

		end

	is_basic_primitive_type (a_native: EWG_NATIVE_MEMBER_WRAPPER): BOOLEAN
		do
			 if attached {EWG_C_AST_PRIMITIVE_TYPE} a_native.c_declaration.type.skip_wrapper_irrelevant_types as l_type and then
			 	not (
			 		attached {EWG_C_AST_POINTER_TYPE} a_native.c_declaration.type.skip_aliases or
			 		attached {EWG_C_AST_ARRAY_TYPE} a_native.c_declaration.type or
				 	attached {EWG_C_AST_STRUCT_TYPE} a_native.c_declaration.type or
			 		attached {EWG_C_AST_UNION_TYPE} a_native.c_declaration.type
			 		)
			 then
				if l_type.is_char_pointer_type or l_type.is_char_type or l_type.is_pointer_type then
					Result := False
				else
					Result := True
				end
			else
				Result := False
			end
		end

	generate_function_accessor (a_function_wrapper: EWG_FUNCTION_WRAPPER)
		require
			a_function_wrapper_not_void: a_function_wrapper /= Void
		do
				-- TODO: We ignore functions with struct or union return type for now
				-- later this problem will be taken care of in the C glue code layer
				generate_routine_signature (a_function_wrapper)

				generate_locals (a_function_wrapper)

				output_stream.put_string ("%T%Tdo")
				output_stream.put_new_line

				generate_routine_call_preparation (a_function_wrapper)

				if
					a_function_wrapper.function_declaration.function_type.return_type.skip_consts_and_aliases /=
					c_system.types.void_type
				then
					if attached {EWG_C_AST_STRUCT_TYPE} a_function_wrapper.function_declaration.function_type.return_type or
						attached {EWG_C_AST_UNION_TYPE} a_function_wrapper.function_declaration.function_type.return_type
					then
						output_stream.put_string ("%T%T%T create Result.make_by_pointer (")
						generate_routine_call (a_function_wrapper)
						output_stream.put_string (")")
					else
						output_stream.put_string ("%T%T%TResult := ")
						generate_routine_call (a_function_wrapper)
					end
				else
					output_stream.put_string ("%T%T%T")
					generate_routine_call (a_function_wrapper)
				end
				output_stream.put_new_line
				output_stream.put_line ("%T%Tend")
--			end
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
				if attached {EWG_C_AST_STRUCT_TYPE} a_function_wrapper.function_declaration.function_type.return_type as l_struct then
					output_stream.put_string (l_struct.name.as_upper)
					output_stream.put_string ("_STRUCT_API")
				elseif attached {EWG_C_AST_UNION_TYPE} a_function_wrapper.function_declaration.function_type.return_type as l_union then
					output_stream.put_string (l_union.name.as_upper)
					output_stream.put_string ("_UNION_API")
				else
					output_stream.put_string (a_function_wrapper.function_declaration.function_type.return_type.corresponding_eiffel_type)
				end
			end
			output_stream.put_string (" ")
			output_stream.put_new_line
		end

	generate_signature_parameter_for_native_member_wrapper (a_native_member_wrapper: EWG_NATIVE_MEMBER_WRAPPER)
		require
			a_native_member_wrapper_not_void: a_native_member_wrapper /= Void
		do
				-- TODO add different types of mapping.
			if attached {EWG_C_AST_ARRAY_TYPE} a_native_member_wrapper.c_declaration.type as l_ast_array then
				output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
				output_stream.put_string (": ")
				if attached {EWG_C_AST_PRIMITIVE_TYPE} l_ast_array.base as l_base then
						-- todo check
					if l_ast_array.corresponding_eiffel_type.has_substring ("POINTER") then
						if l_base.is_char_type then
							output_stream.put_string ("STRING")
						else
							output_stream.put_string ("ARRAY [")
							output_stream.put_string (l_base.corresponding_eiffel_type_api)
							output_stream.put_string ("]")
						end
					else
						output_stream.put_string ("CHARACTER")
					end
				elseif attached {EWG_C_AST_ALIAS_TYPE} l_ast_array.skip_const_pointer_and_array_types as l_alias and then
					l_alias.name.has_substring ("wchar")
				then
					if l_ast_array.corresponding_eiffel_type.has_substring ("POINTER") then
						output_stream.put_string ("STRING_32")
					else
						output_stream.put_string ("CHARACTER_32")
					end
				elseif attached {EWG_C_AST_PRIMITIVE_TYPE} l_ast_array.skip_const_pointer_and_array_types as l_base  then
					output_stream.put_string ("ARRAY [")
					output_stream.put_string (l_base.corresponding_eiffel_type_api)
					output_stream.put_string ("]")
				else
					output_stream.put_string (a_native_member_wrapper.eiffel_type)
				end
--			elseif attached {EWG_C_AST_ALIAS_TYPE} a_native_member_wrapper.c_declaration.type as l_ast_alias and then
--				attached {EWG_C_AST_POINTER_TYPE} l_ast_alias.base as l_base_type and then
--				attached {EWG_C_AST_POINTER_TYPE} l_base_type.base as l_type then
--					output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
--					output_stream.put_string (": ")
--								-- TODO check\
--					if attached {EWG_C_AST_PRIMITIVE_TYPE} l_type.skip_wrapper_irrelevant_types as l_base then
--						output_stream.put_string ("ARRAY [")
--						if l_base.is_char_type then
--							output_stream.put_string ("STRING")
--						else
--							output_stream.put_string (l_base.corresponding_eiffel_type_api)
--						end
--						output_stream.put_string ("]")

--					else
--						output_stream.put_string (a_native_member_wrapper.eiffel_type)
--					end
			elseif attached {EWG_C_AST_STRUCT_TYPE} a_native_member_wrapper.c_declaration.type as l_ast_struct then
				output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
				output_stream.put_string (": ")
				output_stream.put_string (l_ast_struct.name.as_upper)
				output_stream.put_string ("_STRUCT_API")
			elseif attached {EWG_C_AST_UNION_TYPE} a_native_member_wrapper.c_declaration.type as l_ast_union then
				output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
				output_stream.put_string (": ")
				output_stream.put_string (l_ast_union.name.as_upper)
				output_stream.put_string ("_UNION_API")
			elseif is_char_pointer_type (a_native_member_wrapper.c_declaration) then
				output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
				output_stream.put_string (": ")
				output_stream.put_string ("STRING")
			elseif is_unicode_char_pointer_type (a_native_member_wrapper.c_declaration) then
				output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
				output_stream.put_string (": ")
				if a_native_member_wrapper.c_declaration.type.corresponding_eiffel_type.has_substring ("POINTER") then
					output_stream.put_string ("STRING_32")
				else
					output_stream.put_string ("CHARACTER_32")
				end
			else
				output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
				output_stream.put_string (": ")
				output_stream.put_string (a_native_member_wrapper.eiffel_type)
			end
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
		end

	generate_routine_call_parameter_for_native_member_wrapper (a_native_member_wrapper: EWG_NATIVE_MEMBER_WRAPPER)
		require
			a_native_member_wrapper_not_void: a_native_member_wrapper /= Void
		do
			if  attached {EWG_C_AST_STRUCT_TYPE} a_native_member_wrapper.c_declaration.type as l_ast_struct then
				output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
				output_stream.put_string (".item")
			elseif attached {EWG_C_AST_UNION_TYPE} a_native_member_wrapper.c_declaration.type as l_ast_union then
				output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
				output_stream.put_string (".item")
			elseif attached {EWG_C_AST_ARRAY_TYPE} a_native_member_wrapper.c_declaration.type as l_ast_array then
				if attached {EWG_C_AST_PRIMITIVE_TYPE} l_ast_array.base as l_base then
					if a_native_member_wrapper.c_declaration.type.corresponding_eiffel_type.has_substring ("POINTER") then
						if l_base.is_char_type then
							output_stream.put_string ( "(create {C_STRING}.make (")
							output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
							output_stream.put_string ( ")).item")
						else
							output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
							output_stream.put_string (".area.base_address")
						end
					else
						output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
						output_stream.put_string (".code")
					end
				elseif attached {EWG_C_AST_POINTER_TYPE} l_ast_array.base as l_base and then attached {EWG_C_AST_PRIMITIVE_TYPE} l_ast_array.skip_const_pointer_and_array_types then
					output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
					output_stream.put_string (".area.base_address")
				elseif attached {EWG_C_AST_ALIAS_TYPE} l_ast_array.skip_const_pointer_and_array_types as l_alias and then
							l_alias.name.has_substring ("wchar")
				then
					if a_native_member_wrapper.c_declaration.type.corresponding_eiffel_type.has_substring ("POINTER") then
						output_stream.put_string ( "(create {NATIVE_STRING}.make (")
						output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
						output_stream.put_string ( ")).item")
					else
						output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
						output_stream.put_string (".code")
					end
				elseif attached {EWG_C_AST_PRIMITIVE_TYPE} l_ast_array.skip_const_pointer_and_array_types as l_type  then
					if a_native_member_wrapper.c_declaration.type.corresponding_eiffel_type.has_substring ("POINTER") then
						if l_type.is_char_type then
							output_stream.put_string ( "(create {C_STRING}.make (")
							output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
							output_stream.put_string ( ")).item")
						else
							output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
							output_stream.put_string (".area.base_address")
						end
					else
						output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
						output_stream.put_string (".code")
					end
				else
					output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
					output_stream.put_string (".area.base_address")
				end
--			elseif attached {EWG_C_AST_ALIAS_TYPE} a_native_member_wrapper.c_declaration.type as l_ast_alias and then  --char **
--				attached {EWG_C_AST_POINTER_TYPE} l_ast_alias.base as l_base_type and then
--				attached {EWG_C_AST_POINTER_TYPE} l_base_type.base as l_type and then
--				attached {EWG_C_AST_PRIMITIVE_TYPE} l_type.skip_wrapper_irrelevant_types as l_primitive and then
--				l_primitive.is_char_type
--			then
--				output_stream.put_string ("l_")
--				output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
--				output_stream.put_string (".item")
			elseif is_char_pointer_type (a_native_member_wrapper.c_declaration) then
				output_stream.put_string (" (create {C_STRING}.make (")
				output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
				output_stream.put_string (")).item")
			elseif is_unicode_char_pointer_type (a_native_member_wrapper.c_declaration) then
				if a_native_member_wrapper.c_declaration.type.corresponding_eiffel_type.has_substring ("POINTER") then
					output_stream.put_string (" (create {NATIVE_STRING}.make (")
					output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
					output_stream.put_string (")).item")
				else
					output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
					output_stream.put_string (".code")
				end
			else
				output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
			end
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
			-- At the moment only supporting char **
--			if attached {EWG_C_AST_ALIAS_TYPE} a_native_member_wrapper.c_declaration.type as l_ast_alias and then
--				attached {EWG_C_AST_POINTER_TYPE} l_ast_alias.base as l_base_type and then
--				attached {EWG_C_AST_POINTER_TYPE} l_base_type.base as l_type and then
--				attached {EWG_C_AST_PRIMITIVE_TYPE} l_type.skip_wrapper_irrelevant_types as l_base
--			then
--				output_stream.put_string ("%T%T%Tcreate l_")
--				output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
--				output_stream.put_string (".make ( ")
--				output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
--				output_stream.put_string (".count *")
--				output_stream.put_integer ({PLATFORM}.pointer_bytes)
--				output_stream.put_line (")")
--				output_stream.put_string ("%T%T%Tacross")
--				output_stream.put_string (" ")
--				output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
--				output_stream.put_line (" as ic loop")
--				output_stream.put_string ("%T%T%T%T l_")
--				output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
--				output_stream.put_string (".put_pointer (ic.item.area.base_address, (ic.cursor_index - 1) *")
--				output_stream.put_integer ({PLATFORM}.pointer_bytes)
--				output_stream.put_line (")")
--				output_stream.put_string ("%T%T%Tend")
--				output_stream.put_new_line
--			end
		end

	generate_routine_call_preparation_for_zero_terminated_string_member_wrapper (a_zero_terminated_string_member_wrapper: EWG_ZERO_TERMINATED_STRING_MEMBER_WRAPPER)
		require
			a_zero_terminated_string_member_wrapper_not_void: a_zero_terminated_string_member_wrapper /= Void
		do
			output_stream.put_string ("%T%T%Tcreate ")
			output_stream.put_string (a_zero_terminated_string_member_wrapper.mapped_eiffel_name)
			output_stream.put_string ("_c_string.make (")
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
			if is_local_needed (a_function_wrapper) then
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
		end

	generate_local_for_native_member_wrapper (a_native_member_wrapper: EWG_NATIVE_MEMBER_WRAPPER)
		require
			a_native_member_wrapper_not_void: a_native_member_wrapper /= Void
		do
				-- TODO add different types of mapping.
			if attached {EWG_C_AST_ALIAS_TYPE} a_native_member_wrapper.c_declaration.type as l_ast_alias and then
				attached {EWG_C_AST_POINTER_TYPE} l_ast_alias.base as l_base_type and then
				attached {EWG_C_AST_POINTER_TYPE} l_base_type.base as l_type
			then
					output_stream.put_string ("%T%T%Tl_")
					output_stream.put_string (a_native_member_wrapper.mapped_eiffel_name)
					output_stream.put_string (":")
					output_stream.put_string (" MANAGED_POINTER")
					output_stream.put_new_line
			else
				-- TODO
				-- Nothing to do.
			end
		end

	generate_local_for_zero_terminated_string_member_wrapper (a_zero_terminated_string_member_wrapper: EWG_ZERO_TERMINATED_STRING_MEMBER_WRAPPER)
		require
			a_zero_terminated_string_member_wrapper_not_void: a_zero_terminated_string_member_wrapper /= Void
		do
			output_stream.put_string ("%T%T%T")
			output_stream.put_string (a_zero_terminated_string_member_wrapper.mapped_eiffel_name)
			output_stream.put_string ("_c_string: C_STRING")
			output_stream.put_new_line
		end


	is_local_needed (a_function_wrapper: EWG_FUNCTION_WRAPPER ): BOOLEAN
		do
			if attached {EWG_ZERO_TERMINATED_STRING_MEMBER_WRAPPER} a_function_wrapper then
				Result := True
			end
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
			output_stream.put_new_line
			from
				cs := a_function_declaration_list.new_cursor
				cs.start
			until
				cs.off
			loop
				if not is_function_accessor_simple (cs.item) then
					generate_c_inline_function_accessor (cs.item, True)
				end
				cs.forth
				error_handler.tick
			end
		end


	generate_c_inline_function_accessor (a_function_wrapper: EWG_FUNCTION_WRAPPER; a_need_prefix: BOOLEAN)
		require
			a_function_wrapper_not_void: a_function_wrapper /= Void
		local
			cs: DS_BILINEAR_CURSOR [EWG_C_AST_DECLARATION]
			parameter_name_generator: EWG_UNIQUE_NAME_GENERATOR
			is_problematic_result: BOOLEAN
			function_type: EWG_C_AST_FUNCTION_TYPE
		do
			function_type := a_function_wrapper.function_declaration.function_type
			output_stream.put_string ("%T")
			if a_need_prefix then
				output_stream.put_string ("c_")
			end
			output_stream.put_string (a_function_wrapper.mapped_eiffel_name )

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
					output_stream.put_string ("%T%T%T%T*result = ")
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
					output_stream.put_string ("%T%T%T%Treturn result")
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

