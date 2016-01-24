indexing

	description:

		"Agent extensions for GTK_BUTTON"

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	library: "EWG GTK+ 2 Library"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

deferred class GTK_BUTTON_AGENT

inherit

	GTK_OBJECT_AGENT_SKELETON
	
feature {ANY} -- Signals

	connect_clicked_signal_receiver_agent (a_agent: PROCEDURE [ANY, TUPLE [GTK_BUTTON]]) is
			-- Connect `a_agent' to the current widget
		require
			a_agent_not_void: a_agent /= Void
		local
			a_receiver: GTK_CLICKED_SIGNAL_RECEIVER_AGENT
		do
			create a_receiver.make (a_agent)
			connect_signal_receiver (a_receiver)
		end

end
