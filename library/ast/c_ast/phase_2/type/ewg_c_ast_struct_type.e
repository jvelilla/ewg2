note

	description:

		"Objects representing C structs"

	library: "Eiffel Wrapper Generator Library"
	copyright: "Copyright (c) 1999, Andreas Leitner and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class EWG_C_AST_STRUCT_TYPE

inherit

	EWG_C_AST_COMPOSITE_DATA_TYPE
		redefine
			is_same_type,
			is_struct_type
		end

create

	make

feature

	is_same_type (other: EWG_C_AST_TYPE): BOOLEAN
		local
			other_struct: EWG_C_AST_STRUCT_TYPE
		do
			other_struct ?= other
			if other_struct /= Void then
				Result := Current = other_struct or else is_same_composite_type (other_struct)
			end
		end

	is_struct_type: BOOLEAN
		do
			Result := True
		end

feature -- Visitor Pattern

	process (a_processor: EWG_C_AST_TYPE_PROCESSOR) 
			-- Process `Current' using `a_processor'.
		do
			a_processor.process_struct_type (Current)
		end

end
