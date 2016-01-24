indexing
	description:

		"List like data model for GTK_TREE_VIEW"

	copyright: "Copyright (c) 2005, Andreas Leitner and others"
	library: "EWG GTK+ 2 Library"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class GTK_LIST_STORE

inherit

	GTK_OBJECT

	GTKLISTSTORE_FUNCTIONS_EXTERNAL
		export
			{NONE} all
		undefine
			copy,
			is_equal
		end

feature {NONE} -- Initialization
end
