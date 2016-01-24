indexing

	description:

		"Represents a set of EWG_C_AST_DECLARATION elements"

	library: "Eiffel Wrapper Generator Library"
	copyright: "Copyright (c) 1999, Andreas Leitner and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class EWG_C_AST_DECLARATION_SET

inherit

	EWG_C_AST_SHARED_DECLARATION_EQUALITY_TESTER

create

	make

feature {NONE} -- Initialisation

	make is
			-- Create new declaration set
		do
			create declaration_storage.make (Default_declaration_storage_capacity)
			declaration_storage.set_equality_tester (declaration_equality_tester)
		end

feature {ANY} -- Access

	last_declaration: EWG_C_AST_DECLARATION
			-- Last declaration added

feature {ANY} -- Status checkers

	has (a_declaration: EWG_C_AST_DECLARATION): BOOLEAN is
			-- Is `a_declaration' in the set?
		require
			a_declaration_not_void: a_declaration /= Void
		do
			Result := declaration_storage.has (a_declaration)
		end

	count: INTEGER is
			-- Number of declarations in set
		do
			Result := declaration_storage.count
		ensure
			count_greater_equal_zero: Result >= 0
		end

	function_declaration_count: INTEGER is
			-- Number of function declarations in set
		do
			Result := function_declarations.count
		ensure
			count_greater_equal_zero: Result >= 0
		end

	new_cursor: DS_LINEAR_CURSOR [EWG_C_AST_DECLARATION] is
			-- New curser over all declaration in the set
		do
			Result := declaration_storage.new_cursor
		ensure
			cursor_not_void: Result /= Void
		end

	new_function_declaration_cursor: DS_LINEAR_CURSOR [EWG_C_AST_FUNCTION_DECLARATION] is
			-- New curser over all function declarations in the set
		do
			Result := function_declarations.new_cursor
		ensure
			cursor_not_void: Result /= Void
		end

feature {EWG_C_SYSTEM} -- Add function declarations

	add_declaration (a_declaration: EWG_C_AST_DECLARATION) is
			-- Add `a_declaration' to set if not another equal
			-- declaration is already in the set.  Set `last_declaration'
			-- to `a_declaration' if it has been added, otherwise set
			-- `last_declaration' to be the equal function declaration in
			-- `declarations'.
		require
			a_declaration_not_void: a_declaration /= Void
		do
			if declaration_storage.has (a_declaration) then
				last_declaration := declaration_storage.item (a_declaration)
			else
				declaration_storage.force_new (a_declaration)
				last_declaration := a_declaration
			end
		ensure
			a_declaration_added: has (a_declaration)
			last_declaration_not_void: last_declaration /= Void
			last_declaration_equal_to_a_function_declaration: declaration_equality_tester.test (last_declaration, a_declaration)
		end

	function_declarations: DS_LINEAR [EWG_C_AST_FUNCTION_DECLARATION] is
			-- List of all function declarations
			-- TODO: slow implementation, find faster one
		local
			set: DS_HASH_SET [EWG_C_AST_FUNCTION_DECLARATION]
			cs: DS_LINEAR_CURSOR [EWG_C_AST_DECLARATION]
			function_declaration: EWG_C_AST_FUNCTION_DECLARATION
		do
			create set.make (Default_declaration_storage_capacity)
			set.set_equality_tester (function_declaration_equality_tester)
			from
				cs := new_cursor
				cs.start
			until
				cs.off
			loop
				function_declaration ?= cs.item
				if function_declaration /= Void then
					set.force_new (function_declaration)
				end
				cs.forth
			end
			Result := set
		ensure
			function_declarations_not_void: Result /= Void
		end

feature {NONE} -- Implementation

	declaration_storage: DS_HASH_SET [EWG_C_AST_DECLARATION]
			-- List of all declarations

feature {NONE} -- Constants

	Default_declaration_storage_capacity: INTEGER is 10000
			-- Default capacity of `declaration_storage'

invariant

	last_declaration_void_or_in_system: last_declaration /= Void implies has (last_declaration)
	declaration_storage_not_void: declaration_storage /= Void
	declaration_storage_doesnt_have_void: not declaration_storage.has (Void)

end
