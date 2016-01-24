indexing

	description:

		"Objects representing GDK Events"

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	library: "EWG GTK+ 2 Library"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

deferred class GDK_EVENT

inherit

	EWG_STRUCT
		export
			{NONE} all
		redefine
			make_unshared,
			make_shared,
			make_new_unshared,
			make_new_shared
		end
	
	GDK_SHARED_EVENT_FACTORY
			
feature {NONE} -- Initialization

	make_new_unshared is
			-- G_OBJECTs are always shared, because
			-- they are reference counted.
		do
				check
					forbidden: False
				end
		end

	make_new_shared is
			-- G_OBJECTs are always shared, because
			-- they are reference counted.
		do
				check
					forbidden: False
				end
		end

	make_unshared (a_item: POINTER) is
			-- G_OBJECTs are always shared, because
			-- they are reference counted.
		do
				check
					forbidden: False
				end
		end

	make_shared (a_item: POINTER) is
			-- G_OBJECTs are always shared, because
			-- they are reference counted.
		do
			Precursor (a_item)
		end

end

