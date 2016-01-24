indexing

	description:

			"Singly-Linked Lists. linked lists containing integer values or pointers"
			"to data, limited to iterating over the list in one direction."

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	library: "EWG GObject Library"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class GS_LIST

inherit

	GSLIST_STRUCT
		export {G_OBJECT} all end

create

	make_new_unshared,
	make_new_shared,
	make_unshared,
	make_shared

feature {NONE}

end
