note

	description: "This file has been generated by EWG. Do not edit. Changes will be lost!"

	generator: "Eiffel Wrapper Generator"
-- functions wrapper
class SIMPLE_HEADER_FUNCTIONS_EXTERNAL

feature
	func1_external (a: INTEGER; b: INTEGER) is
		external
			"C [macro <ewg_simple_function_c_glue_code.h>] (int, int)"
		alias
			"ewg_function_macro_func1"
		end

	func1_address_external: POINTER is
			-- Address of C function `func1'
		external
			"C [macro <simple_header.h>]: void*"
		alias
			"(void*) func1"
		end

	func2_external (a: INTEGER; b: INTEGER): INTEGER is
		external
			"C [macro <ewg_simple_function_c_glue_code.h>] (int, int):int"
		alias
			"ewg_function_macro_func2"
		end

	func2_address_external: POINTER is
			-- Address of C function `func2'
		external
			"C [macro <simple_header.h>]: void*"
		alias
			"(void*) func2"
		end

end
