indexing

	description:

		"Agent extension of GTK_CLICKED_SIGNAL_RECEIVER"

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	library: "EWG GTK+ 2 Library"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class GTK_CLICKED_SIGNAL_RECEIVER_AGENT

inherit

	GTK_CLICKED_SIGNAL_RECEIVER
		rename
			make as make_internal
		end

	G_RECEIVER_AGENT_SKELETON [PROCEDURE [ANY, TUPLE [GTK_BUTTON]]]

create

	make

feature {NONE}

	on_clicked (a_button: GTK_BUTTON) is
		do
			agent_.call ([a_button])
		end
	
end
