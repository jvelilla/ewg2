indexing

	description:

		"Objects represent Onscreen display areas in the target window system."

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	library: "EWG GTK+ 2 Library"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class GDKGL_WINDOW

inherit

	GDK_DRAWABLE

	GDKGLWINDOW_FUNCTIONS_EXTERNAL
		export
			{NONE} all
		undefine
			is_equal,
			copy
		end

create

	make_shared
		
feature {ANY} -- Status

end
