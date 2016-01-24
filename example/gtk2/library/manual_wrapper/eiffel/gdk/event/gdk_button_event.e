indexing

	description:

		"Objects representing GDK Motion Events"

	copyright: "Copyright (c) 2004, Andreas Leitner and others"
	library: "EWG GTK+ 2 Library"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class GDK_BUTTON_EVENT

inherit

	GDK_EVENT

	GDK_EVENT_BUTTON_STRUCT
		undefine
			make_unshared,
			make_shared,
			make_new_unshared,
			make_new_shared
		end

create

	make
	
feature {NONE} -- Initialization

	make (a_item: POINTER) is
		-- Create new event from `a_item'.
		require
			a_item_not_default_pointer: a_item /= Default_pointer
			a_item_is_event: gdk_event_factory.is_event (a_item)
			a_item_is_expose_event: gdk_event_factory.is_button_press_event (a_item) or
				gdk_event_factory.is_2button_press_event (a_item) or
				gdk_event_factory.is_3button_press_event (a_item)

		do
			make_shared (a_item)
		ensure
			item_not_default_pointer: item /= Default_pointer
			item_set: item = a_item
		end

end

