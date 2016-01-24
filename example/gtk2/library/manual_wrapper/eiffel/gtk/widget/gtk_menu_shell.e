indexing

	description:

		"A base class for menu objects"

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	library: "EWG GTK+ 2 Library"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class GTK_MENU_SHELL

inherit

	GTK_CONTAINER

	GTKMENUSHELL_FUNCTIONS_EXTERNAL
		export
			{NONE} all
		undefine
			is_equal,
			copy
		end

feature {ANY} -- Basic Operations

	append (a_child: GTK_MENU_ITEM) is
			-- Adds a new menu item.
		require
			a_child_not_void: a_child /= Void
		do
			gtk_menu_shell_append_external (item, a_child.item)
		ensure
			-- TODO:
		end

end
