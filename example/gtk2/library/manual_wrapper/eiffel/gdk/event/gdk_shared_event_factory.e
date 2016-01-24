indexing

	description:

		"Shared access to GDK_EVENT_FACTORY Singleton"

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	library: "EWG GTK+ 2 Library"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class GDK_SHARED_EVENT_FACTORY

feature

	gdk_event_factory: GDK_EVENT_FACTORY is
			-- Singleton GDK_EVENT_FACTORY object
		once
			create Result.make
		ensure
			gdk_event_factory_not_void: Result /= Void
		end
	
end
