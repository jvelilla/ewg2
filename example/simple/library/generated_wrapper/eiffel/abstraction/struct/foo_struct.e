note

	description: "This file has been generated by EWG. Do not edit. Changes will be lost!"

	generator: "Eiffel Wrapper Generator"

class FOO_STRUCT

inherit

	EWG_STRUCT

	FOO_STRUCT_EXTERNAL
		export
			{NONE} all
		end

create

	make_new_unshared,
	make_new_shared,
	make_unshared,
	make_shared

feature {ANY} -- Access

	sizeof: INTEGER is
		do
			Result := sizeof_external
		end

feature {ANY} -- Member Access

	a: INTEGER is
			-- Access member `a'
		require
			exists: exists
		do
			Result := get_a_external (item)
		ensure
			result_correct: Result = get_a_external (item)
		end

	set_a (a_value: INTEGER) is
			-- Set member `a'
		require
			exists: exists
		do
			set_a_external (item, a_value)
		ensure
			a_value_set: a_value = a
		end

	b: INTEGER is
			-- Access member `b'
		require
			exists: exists
		do
			Result := get_b_external (item)
		ensure
			result_correct: Result = get_b_external (item)
		end

	set_b (a_value: INTEGER) is
			-- Set member `b'
		require
			exists: exists
		do
			set_b_external (item, a_value)
		ensure
			a_value_set: a_value = b
		end

	pc: POINTER is
			-- Access member `pc'
		require
			exists: exists
		do
			Result := get_pc_external (item)
		ensure
			result_correct: Result = get_pc_external (item)
		end

	set_pc (a_value: POINTER) is
			-- Set member `pc'
		require
			exists: exists
		do
			set_pc_external (item, a_value)
		ensure
			a_value_set: a_value = pc
		end

end
