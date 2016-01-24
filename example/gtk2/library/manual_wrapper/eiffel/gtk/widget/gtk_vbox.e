indexing

	description:

		"Vertical container box"

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	library: "EWG GTK+ 2 Library"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class GTK_VBOX

inherit

	GTK_BOX
		export
			-- The following export rule lets other widgets such as
			-- dialogs, which containts a GtkVBox to create the
			-- corresponding GTK_VBOX from a C pointer.
			{GTK_WIDGET} make_shared;
		end
	
	GTKVBOX_FUNCTIONS_EXTERNAL
		export
			{NONE} all
		undefine
			is_equal,
			copy
		end
	
create

	make,
	make_shared

	
feature {NONE} -- Intialization

	make (a_spacing: INTEGER) is
			-- Creates a new inhomogenous GTK_VBOX
			--
			-- `a_spacing':	the number of pixels to place by default
			--					between children.
		require
			a_spacing_small_enough: a_spacing >= 0
		do
			make_shared (gtk_vbox_new_external (0, a_spacing))
		end

	make_homogenous (a_spacing: INTEGER) is
			-- Creates a new homogenous GTK_VBOX.
			-- homogenous means that all children are to be given
			-- equal space allotments.
			--
			-- `a_spacing':	the number of pixels to place by default
			--					between children.
		require
			a_spacing_small_enough: a_spacing >= 0
		do
			make_shared (gtk_vbox_new_external (1, a_spacing))
		end

feature {ANY} -- Basic operations

end
