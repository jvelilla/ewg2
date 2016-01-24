indexing

	description:

		"Shared access to GDK_PIXBUF_FACTORY singleton"

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	library: "EWG GTK+ 2 Library"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class GDK_SHARED_PIXBUF_FACTORY

feature {ANY} -- Access

	gdk_pixbuf_factory: GDK_PIXBUF_FACTORY is
			-- GDK_PIXBUF_FACTORY singleton object
		once
			create Result.make
		ensure
			result_not_void: Result /= Void
		end
	
end
