indexing

	description:

		"External string routines"

	library: "Eiffel Wrapper Generator Library"
	copyright: "Copyright (c) 1999, Andreas Leitner and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class EWG_EXTERNAL_STRING_ROUTINES

feature {ANY} -- Initialisation

	make_copy_from_c_zero_terminated_string (a_c_string: POINTER): STRING is
			-- Create a new Eiffel string and copy the contents of
			-- `a_c_string' into it. `a_c_string' must point to a
			-- c zero terminated string.
		require
			a_c_string_not_default: a_c_string /= Default_pointer
		do










		ensure
			result_not_void: Result /= Void
		end

feature

	string_to_pointer (a_string: STRING): POINTER is
			-- Get a c pointer to the storage area of an Eiffel string
			-- Thanks to Berend resp. the mico/e team (;
			-- Note: This is extremly dangerous buisness
		require
			a_string_not_void: a_string /= Void





		do









		ensure
			result_not_default_pointer: Result /= default_pointer
		end


	strlen_external (ptr: POINTER): INTEGER is
		require
			ptr_not_nil: ptr /= default_pointer
		external









		alias
			"strlen"
		end

	strcpy_external (a_dest, a_src: POINTER): POINTER is
		require
			a_dest_not_default: a_dest /= Default_pointer
			a_src_not_default: a_src /= Default_pointer
		external









		alias
			"strcpy"
		end


end
