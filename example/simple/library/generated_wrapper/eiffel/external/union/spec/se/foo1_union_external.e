note

	description: "This file has been generated by EWG. Do not edit. Changes will be lost!"

	generator: "Eiffel Wrapper Generator"
-- wrapper for union: foo1

class FOO1_UNION_EXTERNAL

feature {NONE} -- Implementation

	sizeof_external: INTEGER is
		external
			"C inline use <simple_header.h>"
		alias
			"sizeof (foo1)"
		end

	get_a_external (an_item: POINTER): INTEGER is
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline"
		alias
			"((foo1*) $an_item)->a"
		end

	set_a_external (an_item: POINTER; a_value: INTEGER) is
		require
			an_item_not_null: an_item /= default_pointer
		external
			"C inline"
		alias
			"((foo1*) $an_item)->a = $a_value "
		ensure
			a_value_set: a_value = get_a_external (an_item)
		end

end
