indexing

	description:

		"C type cast printer"

	library: "Eiffel Wrapper Generator Library"
	copyright: "Copyright (c) 1999, Andreas Leitner and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class EWG_C_TYPE_CAST_PRINTER

inherit

	EWG_ABSTRACT_C_DECLARATION_PRINTER
		redefine
			can_be_printed_from_type
		end

create

	make,
	make_string

feature -- Status

	is_additional_pointer_indirection_enabeled: BOOLEAN
			-- Should a pointer indirection be added to the cast?

	can_be_printed_from_type (a_type: EWG_C_AST_TYPE; a_declarator: STRING): BOOLEAN is
		do
			Result := Precursor (a_type, a_declarator) and not a_type.skip_consts_and_pointers.is_array_type
				or (is_additional_pointer_indirection_enabeled and a_type.has_closest_alias_type and then
					 (a_type.closest_alias_type_quality = 1 and
					  not a_type.closest_alias_type.skip_consts_and_aliases.is_array_type and
					  can_be_printed_from_type (a_type.closest_alias_type, a_declarator)))
		end

feature -- Status Setting

	enable_additional_pointer_indirection is
		require
			additional_pointer_indirection_disabled: not is_additional_pointer_indirection_enabeled
		do
			is_additional_pointer_indirection_enabeled := True
		end

feature -- Printing

	print_declaration_from_type (a_type: EWG_C_AST_TYPE; a_declarator: STRING) is
			-- Format the cast for  `a_type'.
		local
			type: EWG_C_AST_TYPE
		do
			if is_additional_pointer_indirection_enabeled then
				if
					a_type.has_closest_alias_type and then
					a_type.closest_alias_type_quality = 1 and then
					not a_type.closest_alias_type.skip_consts_and_aliases.is_array_type
				then
					type := a_type.closest_alias_type
				else
					create {EWG_C_AST_POINTER_TYPE} type.make (a_type.header_file_name,
																			 a_type)
				end
			else
				type := a_type
			end
			do_format (type)
		end

 feature {NONE} -- Implentation

	do_format (a_type: EWG_C_AST_TYPE) is
			-- Format the cast for  `a_type'.
		require
			a_type_not_void: a_type /= Void
			a_type_valid: a_type.is_named_recursive or a_type.based_type_recursive.is_function_type or a_type.based_type_recursive.is_eiffel_object_type or a_type.based_type_recursive.has_perfect_alias_type
			a_type_not_array: not a_type.skip_consts_and_pointers.is_array_type
			a_type_not_function_without_pointer_indirections: True -- TODO;
		local
			printer: EWG_C_DECLARATION_PRINTER
		do
			create printer.make (output_stream)
			output_stream.put_character ('(')
			printer.print_declaration_from_type (a_type, "")
			output_stream.put_character (')')
		end

end
