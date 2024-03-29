note

	description:

		"Misc. tests for ewg"

	library: "EWG Library test"
	copyright: "Copyright (c) 2002, Andreas Leitner and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

deferred class EWG_TEST_MISC

inherit

	EWG_TEST_CASE

	EWG_HEADER_FILE_NAMES
		export {NONE} all end

feature

	anonymous_declaration (a_type: EWG_C_AST_TYPE): STRING
		require
			a_type_not_void: a_type /= Void
		local
			printer: EWG_C_DECLARATION_PRINTER
		do
			Result := STRING_.make_buffer (20)
			create printer.make_string (Result)
			printer.print_declaration_from_type (a_type, "")
		ensure
			declaration_not_void: Result /= Void
		end

feature

	test_same_struct_types
		local
			struct: EWG_C_AST_STRUCT_TYPE
			members: DS_ARRAYED_LIST [EWG_C_AST_DECLARATION]
			declaration: EWG_C_AST_DECLARATION
		do
			create struct.make ("foo", "no_header.h", Void)
			create declaration.make ("bar", struct, "no_header.h")
			create members.make (1)
			members.put_last (declaration)
			struct.set_members (members)
			assert_equal ("structs are the same", True, struct.is_same_type (struct))
		end

	test_same_recursive_struct_types
		local
			members: DS_ARRAYED_LIST [EWG_C_AST_DECLARATION]
			declaration: EWG_C_AST_DECLARATION
			struct: EWG_C_AST_STRUCT_TYPE
			b: BOOLEAN
		do
			create members.make (1)
			create struct.make (Void, "foo.h", members)
			create declaration.make ("my_foo", struct, "foo.h")
			members.force_last (declaration)
			assert_equal ("recursive structs are the same", True, struct.is_same_type (struct))
		end

	test_type_set
		local
			second_void_pointer: EWG_C_AST_POINTER_TYPE
			old_count: INTEGER
		do
			old_count := c_system.types.count
			create second_void_pointer.make ("void_needs_no_header.h", c_system.types.void_type)
			c_system.types.add_type (second_void_pointer)
			assert_equal ("old type count equal new one", old_count, c_system.types.count)
			assert_equal ("last_type is void_pointer_type", c_system.types.void_pointer_type, c_system.types.last_type)
		end

	test_lexer_line_directive
		do
			assert_no_syntax_error ("line directive no syntax error", test_035_hpp)
			assert_no_syntax_error ("line directive with extra space, no syntax error", test_077_hpp)
		end

	test_return_type_of_function_type
		do
			process_correct (test_001_hpp)
			assert_equal ("no callback", 0, eiffel_wrapper_set.callback_wrapper_count)
		end

	test_void_parameter
		local
			first: EWG_FUNCTION_WRAPPER
		do
			process_correct (test_037_hpp)
			assert_equal ("one function", 1, eiffel_wrapper_set.function_wrapper_count)
			first := eiffel_wrapper_set.new_function_wrapper_cursor.container.first
			assert_equal ("parameter count zero", 0, first.members.count)
		end

	test_function_type_as_parameter
		local
			first: EWG_CALLBACK_WRAPPER
		do
			process_correct (test_038_hpp)
			assert_equal ("one callback", 1, eiffel_wrapper_set.callback_wrapper_count)
			first := eiffel_wrapper_set.new_callback_wrapper_cursor.container.first
			assert_equal ("callback eiffel name", "void_void_anonymous_callback", first.mapped_eiffel_name)
			assert_equal ("callback c name", "void*", anonymous_declaration (first.c_pointer_type.eiffel_compatible_type))
		end

	test_builtin_gcc_types
		do
			assert_no_syntax_error ("__builtin_va_list no syntax error", test_040_hpp)
		end

	test_keywords
		local
			first: EWG_FUNCTION_WRAPPER
		do
			process_correct (test_041_hpp)
			assert_equal ("one function", 1, eiffel_wrapper_set.function_wrapper_count)
			first := eiffel_wrapper_set.new_function_wrapper_cursor.container.first
			assert_equal ("3 parameters", 3, first.members.count)
			assert_not_equal ("keyword renamed", "end" , first.members.first.mapped_eiffel_name)
		end

	test_comma_after_last_enum_member
		do
			assert_no_syntax_error ("comma after last enum member is allowed in cl", test_042_hpp)
		end

	test_anonymous_bitfield
		do
			assert_no_syntax_error ("anonymous bitfield should parse", test_049_hpp)
		end

	test_struct_member_is_type_name
		local
			first: EWG_STRUCT_WRAPPER
		do
			process_correct (test_052_hpp)
			assert_equal ("one struct found", 1, eiffel_wrapper_set.struct_wrapper_count)
			first := eiffel_wrapper_set.new_struct_wrapper_cursor.container.first
			assert_equal ("one field in struct found", 1, first.members.count)
			assert_equal ("name of field in struct is correct", "foo",
							  first.c_struct_type.members.first.declarator)
			assert_no_syntax_error ("struct member is type name should parse", test_051_hpp)
		end

	test_anonymous_function_parameters
		local
			first: EWG_FUNCTION_WRAPPER
		do
			process_correct (test_054_hpp)
			assert_equal ("one function", 1, eiffel_wrapper_set.function_wrapper_count)
			first := eiffel_wrapper_set.new_function_wrapper_cursor.container.first
			assert_equal ("1 parameters", 1, first.members.count)

			assert_no_syntax_error ("must parse", test_059_hpp)
			assert_no_syntax_error ("must parse", test_060_hpp)
		end

	test_compound
		do
			assert_no_syntax_error ("ignore compounds", test_055_hpp)
		end

	test_type_name_scope
		do
			assert_no_syntax_error ("tricky struct should parse", test_056_hpp)
			assert_no_syntax_error ("tricky callback should parse", test_057_hpp)
			assert_no_syntax_error ("tricky array", test_066_hpp)
		end

	test_anonymous_function_type_parameter
		local
			first: EWG_CALLBACK_WRAPPER
		do
			assert_no_syntax_error ("anonymous parameter of type function pointer must parse", test_058_hpp)
			assert_equal ("one callback", 1, eiffel_wrapper_set.callback_wrapper_count)
			first := eiffel_wrapper_set.new_callback_wrapper_cursor.container.first
			assert_equal ("callback eiffel name", "void_void_anonymous_callback", first.mapped_eiffel_name)
			assert_equal ("callback c name", "void*", anonymous_declaration (first.c_pointer_type.eiffel_compatible_type))
		end

	test_void_alias
		local
			a_alias: EWG_C_AST_ALIAS_TYPE
		do
			create a_alias.make ("void_alias", "no_header.h", c_system.types.void_type)
			c_system.types.add_type (a_alias)
			assert ("void alias is void", a_alias.skip_consts_and_aliases = c_system.types.void_type)
		end

	test_void_alias_function
		local
			first: EWG_FUNCTION_WRAPPER
		do
			process_correct (test_061_hpp)
			assert_equal ("one function", 1, eiffel_wrapper_set.function_wrapper_count)
			first := eiffel_wrapper_set.new_function_wrapper_cursor.container.first
			assert_equal ("0 parameters", 0, first.members.count)

			process_correct (test_062_hpp)
			assert_equal ("one function", 1, eiffel_wrapper_set.function_wrapper_count)
			first := eiffel_wrapper_set.new_function_wrapper_cursor.container.first
			assert ("return type is void", first.function_declaration.function_type.return_type.skip_consts_and_aliases = c_system.types.void_type)
		end

	test_void_alias_callback
		local
			first: EWG_CALLBACK_WRAPPER
		do
			process_correct (test_063_hpp)
			assert_equal ("one callback", 1, eiffel_wrapper_set.callback_wrapper_count)
			first := eiffel_wrapper_set.new_callback_wrapper_cursor.container.first
			assert_equal ("0 parameters", 0, first.members.count)

			process_correct (test_064_hpp)
			assert_equal ("one callback", 1, eiffel_wrapper_set.callback_wrapper_count)
			first := eiffel_wrapper_set.new_callback_wrapper_cursor.container.first
			assert ("return type is void", first.c_pointer_type.function_type.return_type.skip_consts_and_aliases = c_system.types.void_type)
		end

	test_array_as_struct_member
		local
			first: EWG_STRUCT_WRAPPER
		do
			process_correct (test_071_hpp)
			assert_equal ("one struct found", 1, eiffel_wrapper_set.struct_wrapper_count)
			first := eiffel_wrapper_set.new_struct_wrapper_cursor.container.first
			assert_equal ("one field in struct found", 1, first.members.count)
			assert_equal ("member type is correct", "int[20]", anonymous_declaration (first.c_struct_type.members.first.type))
		end

	test_recursive_struct
		do
			assert_no_syntax_error ("struct with itself as member must parse", test_072_hpp)
		end

	test_struct_name_is_typedef_too
		do
			assert_no_syntax_error ("struct name is type name too must parse", test_073_hpp)
		end

	test_weird_typedef_redefinition
		do
			assert_no_syntax_error ("cl allows weird typedef redefinition", test_075_hpp)
		end

	test_function_name_clash_resolver
		local
			first: EWG_FUNCTION_WRAPPER
			second: EWG_FUNCTION_WRAPPER
			cs: DS_LINEAR_CURSOR [EWG_FUNCTION_WRAPPER]
		do
			process_correct (test_076_hpp)


			assert_equal ("two function", 2, eiffel_wrapper_set.function_wrapper_count)
			cs := eiffel_wrapper_set.new_function_wrapper_cursor
			cs.start
			first := cs.item
			cs.forth
			second := cs.item
			assert_not_equal ("functions have different eiffel names", first.mapped_eiffel_name, second.mapped_eiffel_name)
		end

	test_callback_as_parameter
		local
			function: EWG_FUNCTION_WRAPPER
		do
			process_correct (test_078_hpp)
			assert ("at least one function", eiffel_wrapper_set.function_wrapper_count >= 1)
		end

	test_double_consts
		local
			function: EWG_FUNCTION_WRAPPER
		do
			process_correct (test_084_hpp)

			assert_equal ("one function", 1, eiffel_wrapper_set.function_wrapper_count)
			function := eiffel_wrapper_set.new_function_wrapper_cursor.container.first
			assert_equal ("correct declaration of first parameter", "int const*const ",
							  anonymous_declaration (function.function_declaration.function_type.members.first.type))
		end

	test_typedef_with_multiple_declarators
		local
			y: EWG_C_AST_ALIAS_TYPE
			y1: EWG_C_AST_ALIAS_TYPE
		do
			process_correct (test_085_hpp)
			y := c_system.types.find_alias_by_name ("y")
			assert_not_equal ("types has `y'", Void, y)
			assert ("`y' is alias for int", y.base.is_primitive_type)
			y1 := c_system.types.find_alias_by_name ("y1")
			assert_not_equal ("types has `y1'", Void, y1)
			assert ("`y1' is alias for int", y1.base.is_primitive_type)
		end

	test_inline_keyword
		do
			assert_no_syntax_error ("__inline must parse", test_086_hpp)
		end

	test_function_pointer_as_function_parameter
		do
			assert_no_syntax_error ("function pointer as function parameter must parse", test_088_hpp)
		end

	test_c99_bool_type
		local
			cs: DS_LINEAR_CURSOR [EWG_C_AST_FUNCTION_DECLARATION]
			function_decl: EWG_C_AST_FUNCTION_DECLARATION
			function_type: EWG_C_AST_FUNCTION_TYPE
		do
			assert_no_syntax_error ("_Bool is a valid type in C99", test_097_hpp)
			cs := c_system.declarations.new_function_declaration_cursor
			cs.start
			function_decl := cs.item
			assert_not_same ("Function exists", Void, function_decl)
			function_type := function_decl.function_type
			assert_strings_equal ("C type is _Bool", "_Bool", function_type.return_type.name)
			assert_strings_equal ("Eiffel type of _Bool is INTEGER", "INTEGER", function_type.return_type.corresponding_eiffel_type)
		end

	test_cast_in_enum 
		local
			cs: DS_LINEAR_CURSOR [EWG_C_AST_FUNCTION_DECLARATION]
			function_decl: EWG_C_AST_FUNCTION_DECLARATION
			function_type: EWG_C_AST_FUNCTION_TYPE
		do
			assert_no_syntax_error ("enum members can have alias types in cast", test_099_hpp)
		end

end
