indexing

	description:

		"GTK horizontal separator, used to group the widgets within a window"

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	library: "EWG GTK+ 2 Library"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class GTK_HSEPARATOR

inherit

	GTK_SEPARATOR

	GTKHSEPARATOR_FUNCTIONS_EXTERNAL
		export
			{NONE} all
		undefine
			is_equal,
			copy
		end

create

	make

feature {NONE} -- Creation

	make is
			-- Creates new horizontal separator
		do
			make_shared (gtk_hseparator_new_external)
		end

end
