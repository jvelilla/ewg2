indexing

	description:

		"Constans identifieng the various calling conventions of functions"

	library: "Eiffel Wrapper Generator Library"
	copyright: "Copyright (c) 1999, Andreas Leitner and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"
	note: "For further details see http://msdn.microsoft.com/library/default.asp?url=/library/en-us/vclang/html/_core_argument_passing_and_naming_conventions.asp"

class EWG_C_CALLING_CONVENTION_CONSTANTS


feature {ANY}

	cdecl: INTEGER is 0
			-- Default C calling convention.
			-- Stack is cleaned up by caller.
			-- "varargs" possible.

	stdcall: INTEGER is 1
			-- Visual C extension.
			-- Used to call Win32 API functions.
			-- Callee cleans up the stack.
			-- Funtions that use this calling convention
			-- require a function prototype.
			-- Compiler makes "varargs" functions `cdecl'.

	fastcall: INTEGER is 2
			-- Visual C extension.
			-- Arguments to functions are passed in registers when possible.


feature

	is_valid_calling_convention_constant (a_value: INTEGER): BOOLEAN is
		do
			Result := a_value >= 0 and a_value <= 2
		ensure
			a_value_is_calling_convention_constant: (a_value = cdecl) or (a_value = stdcall) or (a_value = fastcall)
		end

end
