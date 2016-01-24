indexing

	description:

		"Test Case application"

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class TEST_APPLICATION

inherit

	TEST_HEADER_FUNCTIONS_EXTERNAL

create

	make

feature

	make is
		do
			foo_external (Default_pointer)
		end

end
