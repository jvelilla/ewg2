indexing

	description:

		"Agent extension of GTK_DESTROY_SIGNAL_RECEIVER"

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	library: "EWG GTK+ 2 Library"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class G_TIMEOUT_RECEIVER_AGENT

inherit

	G_TIMEOUT_RECEIVER
		rename
			make as make_internal
		end

	G_RECEIVER_AGENT_SKELETON [FUNCTION [ANY, TUPLE, BOOLEAN]]

create

	make

feature {NONE}

	on_timeout: BOOLEAN is
		do
			Result := agent_.item ([])
		end
	
end
