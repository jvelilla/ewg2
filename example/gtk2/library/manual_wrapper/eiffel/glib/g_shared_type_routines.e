indexing

	description:

		"Shared access for routines dealing with GType"

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	library: "EWG GObject Library"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class G_SHARED_TYPE_ROUTINES

feature {ANY}

	g_type_routines: G_TYPE_ROUTINES is
			-- Returns `G_TYPE_ROUTINES' singleton object.
		once
			create Result.make
		ensure
			result_not_void: Result /= Void
		end
end
