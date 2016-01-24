indexing

	description:

		"TODO:"

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class WINDOW_2

inherit

	EWG_OPENGL_WINDOW

create

	make
	
feature

	on_display is
		do
			gl_clear_color_external(1, 0, 0, 0)
			gl_clear_external(ewg_get_constant_gl_color_buffer_bit)
			gl_flush_external
		end

end

	
