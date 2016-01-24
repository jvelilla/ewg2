indexing

	description:

		"Shared access to singleton G_OBJECT_MANAGER"

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	library: "EWG GObject Library"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class G_SHARED_OBJECT_MANAGER

feature {ANY}

	g_object_manager: G_OBJECT_MANAGER is
			-- Return G_OBJECT manager singleton.
		once
			create Result.make
		ensure
			g_object_manager_not_void: Result /= Void
		end

end
