note

	description:

		"Cast formatting tests for ewg"

	library: "EWG Library test"
	copyright: "Copyright (c) 2002, Andreas Leitner and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

deferred class EWG_TEST_CAST

inherit

	EWG_TEST_CASE

	KL_IMPORTED_STRING_ROUTINES
		export {NONE} all end

feature -- Tests

	test_primitive_type
		do
			assert_cast_from_source ("(char)", "char foo;")
			assert_cast_from_source ("(int)", "int foo;")
			assert_cast_from_source ("(long)", "long foo;")
			assert_cast_from_source ("(double)", "double foo;")
			assert_cast_from_source ("(float)", "float foo;")
			assert_cast_from_source ("(short)", "short foo;")
		end

	test_alias_type
		do
			assert_cast_from_source ("(foo)", "typedef char foo; foo bar;")
			assert_cast_from_source ("(foo_struct)",
													  "struct foo; typedef struct foo foo_struct; foo_struct bar;")
			assert_cast_from_source ("(foo_union)",
													  "union foo; typedef union foo foo_union; foo_union bar;")
			assert_cast_from_source ("(foo_enum)",
													  "enum foo; typedef enum foo foo_enum; foo_enum bar;")
		end

	test_pointer_type
		do
			assert_cast_from_source ("(void*)", "void *foo;")
			assert_cast_from_source ("(void (*) (void))", "void (*foo) (void);")
		end

	test_const_type
		do
			assert_cast_from_source ("(void const*)", "void const *foo;")
			assert_cast_from_source ("(void const*)", "const void *foo;")
			assert_cast_from_source ("(void*const *)", "void *const *foo;")

			assert_cast_from_source ("(struct foo const)",
													  "const struct foo {int i;} bar;")
			assert_cast_from_source ("(union foo const)",
													  "const union foo {int i;} bar;")
			assert_cast_from_source ("(enum foo const)",
													  "const enum foo {i} bar;")
		end

	test_struct_type
		do
			assert_cast_from_source ("(struct foo)", "struct foo bar;")
			assert_cast_from_source ("(struct foo)", "struct foo {int i;} bar;")
			assert_cast_from_source ("(struct foo)", "struct foo {int i;}; struct foo bar;")
		end

	test_union_type
		do
			assert_cast_from_source ("(union foo)", "union foo bar;")
			assert_cast_from_source ("(union foo)", "union foo {int i;} bar;")
			assert_cast_from_source ("(union foo)", "union foo {int i;}; union foo bar;")
		end

	test_enum_type 
		do
			assert_cast_from_source ("(enum foo)", "enum foo bar;")
			assert_cast_from_source ("(enum foo)", "enum foo {i} bar;")
			assert_cast_from_source ("(enum foo)", "enum foo {i}; enum foo bar;")
			assert_cast_from_source ("(enum foo)", "enum foo {i,j,k}; enum foo bar;")
		end

end
