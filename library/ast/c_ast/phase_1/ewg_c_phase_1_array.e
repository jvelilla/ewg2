note

	description:

		"AST Element of Phase 1, represents C Arrays"

	library: "Eiffel Wrapper Generator Library"
	copyright: "Copyright (c) 1999, Andreas Leitner and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"


class EWG_C_PHASE_1_ARRAY

create

	make,
	make_with_size

feature

	make
			-- Create new array without a defined size
		do
		ensure
			size_not_defined: not is_size_defined
		end

	make_with_size (a_size: STRING)
			-- Create a new array with the size `a_size'
		require
			a_size_not_void: a_size /= Void
			a_size_not_empty: a_size.count > 0
		do
			size := a_size
		ensure
			size_defined: is_size_defined
			size_set: size = a_size
		end

feature

	size: STRING
			-- Size of current array as unparsed string

	is_size_defined: BOOLEAN 
			-- Does current array have a defined size ?
		do
			Result := size /= Void
		end

invariant

	size_defined_equals_size_not_void: is_size_defined = (size /= Void)

	size_defined_implies_size_not_empty: is_size_defined implies size.count > 0

end
