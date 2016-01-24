indexing

	description:

		"Objects that can receive signals"

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	library: "EWG GObject Library"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

deferred class G_SIGNAL_RECEIVER

inherit
	
	G_CLOSURE
		
feature {G_OBJECT}

	signal_name: STRING is
			-- Name of the signal we receive
		deferred
		ensure
			signal_name_not_void: Result /= Void
			signal_name_not_empty: Result.count > 0
		end

end
