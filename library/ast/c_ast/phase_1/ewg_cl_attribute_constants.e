indexing

	description:

		"Constants identifying various VC attributes"

	library: "Eiffel Wrapper Generator Library"
	copyright: "Copyright (c) 1999, Andreas Leitner and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class EWG_CL_ATTRIBUTE_CONSTANTS

feature

	cl_attribute_asm: INTEGER is 0

	cl_attribute_fastcall: INTEGER is 1

	cl_attribute_based: INTEGER is 2

	cl_attribute_cdecl: INTEGER is 3

	cl_attribute_inline: INTEGER is 4

	cl_attribute_stdcall: INTEGER is 5
	
end
