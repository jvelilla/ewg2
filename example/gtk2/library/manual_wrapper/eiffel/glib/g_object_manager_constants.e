indexing

	description:

		"Class providing constants for G_OBJECT management"

	copyright: "Copyright (c) 2003, Andreas Leitner and others"
	library: "EWG GObject Library"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class G_OBJECT_MANAGER_CONSTANTS

feature

	wrapper_key_constant: STRING is "ewg_wrapper_key"

	wrapper_key_c_string_constant: EWG_ZERO_TERMINATED_STRING is
		once
			-- This will result in a memory leak
			-- But since we need the constant from `G_OBJECT.dispose'
			-- we need to make sure it is available till the end
			-- (otherwise the constant could be collected before
			-- one G_OBJECT)
			create Result.make_shared_from_string (wrapper_key_constant)
		ensure
			wrapper_key_c_string_constant_not_void: wrapper_key_c_string_constant /= Void
		end
	
end
	
