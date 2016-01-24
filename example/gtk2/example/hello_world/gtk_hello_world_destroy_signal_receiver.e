indexing

	description:

		"GTK+ 2 example clicked signal receiver"

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class GTK_HELLO_WORLD_DESTROY_SIGNAL_RECEIVER

inherit

	GTK_DESTROY_SIGNAL_RECEIVER
		
	GTK_SHARED_MAIN
		export {NONE} all end
	
create

	make
	
feature {NONE}

	on_destroy (a_gtk_object: GTK_OBJECT) is
		do
			print ("Received the 'destroy' signal%N")
				-- Quit the application
				-- If we would not do that, only
				-- `a_object' would be destroyed
				-- but the main loop would continue
				-- running.
			gtk_main.quit_main_loop
		end

end
