note
	description:"[
			Generates Eiffel external wrappers for C struct types
			]"
	library: "Eiffel Wrapper Generator Library"
	date: "$Date$"
	revision: "$Revision$"

class
	EWG_EIFFEL_INLINE_STRUCT_WRAPPER_GENERATOR

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

feature

	generate (a_eiffel_wrapper_set: EWG_EIFFEL_WRAPPER_SET)
		local
			cs: DS_BILINEAR_CURSOR [EWG_STRUCT_WRAPPER]
			file_name: STRING
			file: KL_TEXT_OUTPUT_FILE
		do
			from
				cs := a_eiffel_wrapper_set.new_struct_wrapper_cursor
				cs.start
			until
				cs.off
			loop
				file_name := file_system.pathname (directory_structure.eiffel_external_struct_directory_name, cs.item.mapped_eiffel_name.as_lower + "_struct_inline.e")

				create file.make (file_name)
				file.recursive_open_write

				if not file.is_open_write then
					error_handler.report_cannot_write_error (file_name)
				else
					file.put_line (Generated_file_warning_eiffel_comment)
					output_stream := file
					make_printers
					generate_struct_wrapper (cs.item)
					file.close
				end
				error_handler.tick
				cs.forth
			end
		end

feature {NONE} -- Implementation

	generate_struct_wrapper (a_struct_wrapper: EWG_STRUCT_WRAPPER)
		local
			c_declaration_printer: EWG_C_DECLARATION_PRINTER
			eiffel_to_c_cast_printer: EWG_EIFFEL_TO_C_TYPE_CAST_PRINTER
			type_name: STRING
			escaped_struct_name: STRING
			cs: DS_BILINEAR_CURSOR [EWG_C_AST_DECLARATION]
			cast_with_one_pointer_indirection: STRING
		do
			create type_name.make (20)
			create c_declaration_printer.make_string (type_name)
			if c_declaration_printer.can_be_printed_from_type (a_struct_wrapper.c_struct_type, "") then
				c_declaration_printer.print_declaration_from_type (a_struct_wrapper.c_struct_type, "")
			else
					check
						a_struct_wrapper.c_struct_type.has_closest_alias_type
					end
				c_declaration_printer.print_declaration_from_type (a_struct_wrapper.c_struct_type.closest_alias_type, "")
			end
			escaped_struct_name := clone (type_name)
			escape_type_name_to_be_c_identifier (escaped_struct_name)

			output_stream.put_string ("-- wrapper for struct: ")
			output_stream.put_string (type_name)
			output_stream.put_new_line
			output_stream.put_new_line

			output_stream.put_string ("class ")
			output_stream.put_string (a_struct_wrapper.mapped_eiffel_name)
			output_stream.put_string ("_STRUCT_INLINE")
			output_stream.put_new_line
			output_stream.put_new_line

			output_stream.put_line ("feature {NONE} -- Implementation")
			output_stream.put_new_line


			if a_struct_wrapper.c_struct_type.is_complete then
				generate_sizeof_feature (a_struct_wrapper.header_file_name,
												 type_name,
												 escaped_struct_name)
			else
				-- What shall I do? I simply cant find out the size of an incomplete struct
				-- TODO: Either don't wrap incomplete structs, or add a notion of completeness in wrapper
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
			eiffel_to_c_cast_printer.enable_additional_pointer_indirection
			eiffel_to_c_cast_printer.print_declaration_from_type (a_struct_wrapper.c_struct_type, "")

			-- member access
			if a_struct_wrapper.c_struct_type.is_complete then
				from
					cs := a_struct_wrapper.c_struct_type.members.new_cursor
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
														escaped_struct_name,
														a_struct_wrapper.header_file_name,
														type_name,
														cast_with_one_pointer_indirection)
						if not cs.item.type.skip_consts_and_aliases.is_array_type then
							generate_member_setter (cs.item,
															escaped_struct_name,
															a_struct_wrapper.header_file_name,
															type_name,
															cast_with_one_pointer_indirection)
						end
					end
					cs.forth
				end
			end

			output_stream.put_line ("end")
			output_stream.put_new_line
		end

	generate_member_getter (a_struct_member: EWG_C_AST_DECLARATION;
									an_escaped_struct_name: STRING;
									a_header_file_name: STRING;
									a_declaration: STRING;
									a_cast_with_one_pointer_indirection: STRING)
		require
			a_struct_member_not_void: a_struct_member /= Void
			an_escaped_struct_name_not_void: an_escaped_struct_name /= Void
			a_declaration_not_void: a_declaration /= Void
			a_cast_with_one_pointer_indirection_not_void: a_cast_with_one_pointer_indirection /= Void
		local
			eiffel_member_name: STRING
		do
			eiffel_member_name := eiffel_parameter_name_from_c_parameter_name (a_struct_member.declarator)
			output_stream.put_string ("%Tc_")
			output_stream.put_string (eiffel_member_name)
			output_stream.put_string (" (an_item: POINTER): ")
			output_stream.put_string (a_struct_member.type.corresponding_eiffel_type)
			output_stream.put_line ("%N%T%Trequire")
			output_stream.put_line ("%T%T%Tan_item_not_null: an_item /= default_pointer")
			output_stream.put_line ("%T%Texternal")

			generate_inline_struct_wrapper (a_header_file_name)

			output_stream.put_line ("%T%Talias")
			output_stream.put_line ("%T%T%T%"[")
			output_stream.put_string ("%T%T%T%T")
			if
				a_struct_member.type.skip_consts_and_aliases.is_struct_type or
				a_struct_member.type.skip_consts_and_aliases.is_union_type
			then
				output_stream.put_character ('&')
			end
			output_stream.put_string ("(")
			output_stream.put_string (a_cast_with_one_pointer_indirection)
			output_stream.put_string ("$an_item)->")
			output_stream.put_line (a_struct_member.declarator)
			output_stream.put_line ("%T%T%T]%"")
			output_stream.put_line ("%T%Tend")
			output_stream.put_new_line

		end

	generate_member_setter (a_struct_member: EWG_C_AST_DECLARATION;
									an_escaped_struct_name: STRING;
									a_header_file_name: STRING;
									a_declaration: STRING;
									a_cast_with_one_pointer_indirection: STRING)
		require
			a_struct_member_not_void: a_struct_member /= Void
			an_escaped_struct_name_not_void: an_escaped_struct_name /= Void
			a_declaration_not_void: a_declaration /= Void
			a_cast_with_one_pointer_indirection_not_void: a_cast_with_one_pointer_indirection /= Void
			not_array: not a_struct_member.type.skip_consts_and_aliases.is_array_type
		local
			eiffel_member_name: STRING
			eiffel_to_c_cast_printer: EWG_EIFFEL_TO_C_TYPE_CAST_PRINTER
		do
			create eiffel_to_c_cast_printer.make (output_stream, eiffel_compiler_mode)
			eiffel_member_name := eiffel_parameter_name_from_c_parameter_name (a_struct_member.declarator)
			output_stream.put_string ("%Tset_c_")
			output_stream.put_string (eiffel_member_name)
			output_stream.put_string (" (an_item: POINTER; a_value: ")
			output_stream.put_string (a_struct_member.type.corresponding_eiffel_type)
			output_stream.put_line (") ")
			output_stream.put_line ("%T%Trequire")
			output_stream.put_line ("%T%T%Tan_item_not_null: an_item /= default_pointer")
			output_stream.put_line ("%T%Texternal")

			generate_inline_struct_wrapper (a_header_file_name)

			output_stream.put_line ("%T%Talias")
			output_stream.put_line ("%T%T%T%"[")
			output_stream.put_string ("%T%T%T%T(" + a_cast_with_one_pointer_indirection)
			output_stream.put_string ("$an_item)->")
			output_stream.put_string (a_struct_member.declarator)
			output_stream.put_string (" = ")
			output_stream.put_character (' ')
			if
				a_struct_member.type.skip_consts_and_aliases.is_struct_type or
					a_struct_member.type.skip_consts_and_aliases.is_union_type
			then
				output_stream.put_character ('*')
			end
			eiffel_to_c_cast_printer.print_declaration_from_type (a_struct_member.type, "")
			output_stream.put_line ("$a_value")
			output_stream.put_line ("%T%T%T]%"")
			if
				not (a_struct_member.type.skip_consts_and_aliases.is_struct_type or
					  a_struct_member.type.skip_consts_and_aliases.is_union_type)
			then
				output_stream.put_line ("%T%Tensure")
				output_stream.put_string ("%T%T%Ta_value_set: a_value = c_")
				output_stream.put_string (eiffel_member_name)
				output_stream.put_line (" (an_item)")
			end
			output_stream.put_line ("%T%Tend")
			output_stream.put_new_line
		end

	generate_sizeof_feature (a_header_file_name: STRING;
									 a_type_name: STRING;
									 an_escaped_struct_name: STRING)
		require
			a_header_file_name_not_void: a_header_file_name /= Void
			a_type_name_not_void: a_type_name /= Void
			an_escaped_struct_name_not_void: an_escaped_struct_name /= Void
		do
			output_stream.put_line ("%Tsizeof_external: INTEGER ")
			output_stream.put_line ("%T%Texternal")

			generate_inline_struct_wrapper (a_header_file_name)

			output_stream.put_line ("%T%Talias")
			output_stream.put_string ("%T%T%T%"sizeof(")
			output_stream.put_string (a_type_name)
			output_stream.put_line (")%"")
			output_stream.put_line ("%T%Tend")
		end

	generate_inline_struct_wrapper (a_header_file_name: STRING)
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
