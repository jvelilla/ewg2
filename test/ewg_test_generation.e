note

	description:

		"Complete generation tests for ewg"

	library: "EWG test"
	copyright: "Copyright (c) 2002, Andreas Leitner and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

deferred class EWG_TEST_GENERATION

inherit

	EWG_TEST_CASE
		redefine
			set_up,
			tear_down
		end

	EWG_HEADER_FILE_NAMES
		export {NONE} all end

	EWG_C_SOURCE_FILE_NAMES
		export {NONE} all end

	EWG_ROOT_CLASS_FILE_NAMES
		export {NONE} all end

	KL_SHARED_FILE_SYSTEM
		export {NONE} all end

feature

	set_up
		local
			a_command: DP_SHELL_COMMAND
		do
			old_working_directory := file_system.current_working_directory
			create a_command.make ("geant -b setup_test_library.eant install")
			a_command.execute
		end

	tear_down
		local
			a_command: DP_SHELL_COMMAND
		do
			file_system.set_current_working_directory (old_working_directory)
			create a_command.make ("geant -b setup_test_library.eant clean")
			a_command.execute
		end

feature {NONE}

	old_working_directory: STRING

	process_generation
		do
			old_working_directory := file_system.current_working_directory
			file_system.set_current_working_directory ("test_library")
			assert_execute ("geant install")
			assert_execute ("geant c_build_library")
			file_system.set_current_working_directory (old_working_directory)
			file_system.set_current_working_directory ("test_application")
			assert_execute ("geant compile")
			file_system.set_current_working_directory (old_working_directory)
		end

	insert_target_header (a_file_name: STRING)
		do
			file_system.copy_file (a_file_name, target_header_file_name)
		end

	insert_target_c_source (a_file_name: STRING)
		do
			file_system.copy_file (a_file_name, target_c_source_file_name)
		end

	insert_target_root_class (a_file_name: STRING)
		do
			file_system.copy_file (a_file_name, target_root_class_file_name)
		end

	target_header_file_name: STRING
		once
			Result := file_system.pathname ("test_library", "manual_wrapper")
			Result := file_system.pathname (Result, "c")
			Result := file_system.pathname (Result, "include")
			Result := file_system.pathname (Result, "test_header.h")
		ensure
			result_not_void: Result /= Void
		end

	target_root_class_file_name: STRING
		once
			Result := file_system.pathname ("test_application", "test_application.e")
		ensure
			result_not_void: Result /= Void
		end

	target_c_source_file_name: STRING
		once
			Result := file_system.pathname ("test_library", "manual_wrapper")
			Result := file_system.pathname (Result, "c")
			Result := file_system.pathname (Result, "src")
			Result := file_system.pathname (Result, "simple_c.c")
		ensure
			result_not_void: Result /= Void
		end

feature

	test_simple
		do
			process_generation
		end

	test_nested_callback
		do
			insert_target_header (test_065_h)
			process_generation
		end

	test_aliased_but_anonymous_struct
		do
			insert_target_header (test_080_h)
			process_generation
		end

	test_callback_as_function_parameter
		do
			insert_target_root_class (test_001_e)
			insert_target_header (test_081_h)
			insert_target_c_source (test_001_c)
			process_generation
		end

	test_callback_struct
		do
			insert_target_header (test_082_h)
			process_generation
		end

	test_nested_struct
		do
			insert_target_header (test_083_h)
			process_generation
		end

	test_enum_generation
		do
			insert_target_header (test_087_h)
			process_generation
		end

	test_array_generation
		do
			insert_target_header (test_089_h)
			process_generation
		end

	test_function_returning_function_pointer
		do
			insert_target_header (test_090_h)
			process_generation
		end

	test_recursive_function_returning_function_pointer
		do
			insert_target_header (test_091_h)
			process_generation
		end

	test_array_as_struct_member
		do
			insert_target_header (test_092_h)
			process_generation
		end

	test_redeclared_typename 
		do
			insert_target_header (test_093_h)
			process_generation
		end

	test_function_returning_struct
		do
			insert_target_header (test_098_h)
			insert_target_c_source (test_002_c)
			process_generation
		end

end
