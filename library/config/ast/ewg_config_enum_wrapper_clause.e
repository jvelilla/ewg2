indexing

	description:

		"Represents a wrapper clause that will generate enum wrappers"

	copyright: "Copyright (c) 1999, Andreas Leitner and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class EWG_CONFIG_ENUM_WRAPPER_CLAUSE

inherit

	EWG_CONFIG_COMPOSITE_DATA_TYPE_WRAPPER_CLAUSE

create

	make

feature {ANY} -- Access

	accepts_type (a_type: EWG_C_AST_TYPE): BOOLEAN is
		local
			skipped_type: EWG_C_AST_TYPE
		do
			skipped_type := a_type.skip_wrapper_irrelevant_types
			Result := skipped_type.is_enum_type and skipped_type.can_be_wrapped
		end

feature {ANY} -- Basic Routines
	
	shallow_wrap_type (a_type: EWG_C_AST_TYPE;
							 a_include_header_file_name: STRING;
							 a_eiffel_wrapper_set: EWG_EIFFEL_WRAPPER_SET) is
		local
			enum_type: EWG_C_AST_ENUM_TYPE
			enum_wrapper: EWG_ENUM_WRAPPER
			member_list: DS_ARRAYED_LIST [EWG_MEMBER_WRAPPER]
		do
			enum_type ?= a_type.skip_wrapper_irrelevant_types
				check
					enum_type_not_void: enum_type /= Void
				end
			create member_list.make_default
			create enum_wrapper.make (eiffel_identifier_for_type (enum_type),
											  a_include_header_file_name,
											  enum_type,
											  member_list)
			a_eiffel_wrapper_set.add_wrapper (enum_wrapper)
		end
	
end


	
