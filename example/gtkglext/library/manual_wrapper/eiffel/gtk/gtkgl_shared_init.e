indexing

	description:

		"Provides shared access to GTKGL_INIT"

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	library: "EWG GTK+ 2 Library"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class GTKGL_SHARED_INIT

feature

	gtkgl_init: GTKGL_INIT is
			-- Returns objcect that provides routines
			-- to manage the GTK main loop
		once
			create Result.make
		ensure
			gtkgl_init_not_void: Result /= Void
		end
	
end
