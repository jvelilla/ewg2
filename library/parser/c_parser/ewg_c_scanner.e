note
	description: "Scan C header file for type definitions"
	status: "See notice at end of class"
	author: "Based on http://www.lysator.liu.se/c"
	date: "$Date: 2006/05/30 13:22:26 $"
	revision: "$Revision: 1.9 $"
	info: "Based on: http://www.lysator.liu.se/c"

deferred class EWG_C_SCANNER

inherit

	EWG_C_SCANNER_SKELETON


feature -- Status report

	valid_start_condition (sc: INTEGER): BOOLEAN
			-- Is `sc' a valid start condition?
		do
			Result := (INITIAL <= sc and sc <= SC_GCC_ATTRIBUTE)
		end

feature {NONE} -- Implementation

	yy_build_tables
			-- Build scanner tables.
		do
			yy_nxt := yy_nxt_template
			yy_chk := yy_chk_template
			yy_base := yy_base_template
			yy_def := yy_def_template
			yy_ec := yy_ec_template
			yy_meta := yy_meta_template
			yy_accept := yy_accept_template
		end

	yy_execute_action (yy_act: INTEGER)
			-- Execute semantic action.
		do
			inspect yy_act
when 1 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 37 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 37")
end

				set_start_condition (SC_FILE)
				less (0)
			
when 2 then
yy_set_line_column
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 48 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 48")
end
 -- GNU CPP style
				set_header_line_number ((text_substring (3, text_count - 2)).to_integer)
				
when 3 then
yy_set_line_column
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 51 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 51")
end
  -- Visual C++ style
				set_header_line_number ((text_substring (7, text_count - 2)).to_integer)
			
when 4 then
	yy_line := yy_line + 1
	yy_column := 1
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 54 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 54")
end
  set_start_condition (INITIAL) 
when 5 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 55 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 55")
end
 set_header_file_name (text) 
when 6 then
	yy_line := yy_line + 1
	yy_column := 1
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 56 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 56")
end
set_start_condition (INITIAL) 
when 7 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 59 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 59")
end

					implementation_bracket_counter := implementation_bracket_counter + 1
				
when 8 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 62 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 62")
end

					implementation_bracket_counter := implementation_bracket_counter - 1
					if implementation_bracket_counter = 0 then
						last_token := Right_brace_code
						last_string_value := text
					end
				
when 9 then
yy_set_line_column
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 70 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 70")
end
 
when 10 then
yy_set_line_column
	yy_position := yy_position + 1
--|#line 72 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 72")
end
 
when 11 then
	yy_column := yy_column + 10
	yy_position := yy_position + 10
--|#line 75 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 75")
end

					check
						msc_declspec_bracket_counter_is_zero: msc_declspec_bracket_counter = 0
					end
					if is_msc_extensions_enabled then
						-- grammar for "__declspec" construct is ambiguos.
						-- we don't need this information -> we ignore it
						-- (now we need to the "(dllimport)" part too)
						set_start_condition (SC_MSC_DECLSPEC)
					else
						report_type_or_identifier (text)
					end
				
when 12 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 88 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 88")
end

				msc_declspec_bracket_counter := msc_declspec_bracket_counter + 1
			
when 13 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 91 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 91")
end

					msc_declspec_bracket_counter := msc_declspec_bracket_counter - 1
					if msc_declspec_bracket_counter = 0 then
						set_start_condition (INITIAL)
					end
			
when 14 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 97 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 97")
end

when 15 then
	yy_column := yy_column + 4
	yy_position := yy_position + 4
--|#line 102 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 102")
end
 last_token := TOK_AUTO; last_string_value := text
when 16 then
	yy_column := yy_column + 5
	yy_position := yy_position + 5
--|#line 103 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 103")
end
 last_token := TOK_BREAK; last_string_value := text 
when 17 then
	yy_column := yy_column + 4
	yy_position := yy_position + 4
--|#line 104 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 104")
end
 last_token := TOK_CASE; last_string_value := text 
when 18 then
	yy_column := yy_column + 4
	yy_position := yy_position + 4
--|#line 105 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 105")
end
 last_token := TOK_CHAR; last_string_value := text 
when 19 then
	yy_column := yy_column + 5
	yy_position := yy_position + 5
--|#line 106 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 106")
end
 last_token := TOK_CONST; last_string_value := text 
when 20 then
	yy_column := yy_column + 8
	yy_position := yy_position + 8
--|#line 107 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 107")
end
 last_token := TOK_CONTINUE; last_string_value := text 
when 21 then
	yy_column := yy_column + 7
	yy_position := yy_position + 7
--|#line 108 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 108")
end
 last_token := TOK_DEFAULT; last_string_value := text 
when 22 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 109 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 109")
end
 last_token := TOK_DO; last_string_value := text 
when 23 then
	yy_column := yy_column + 6
	yy_position := yy_position + 6
--|#line 110 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 110")
end
 last_token := TOK_DOUBLE; last_string_value := text 
when 24 then
	yy_column := yy_column + 4
	yy_position := yy_position + 4
--|#line 111 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 111")
end
 last_token := TOK_ELSE; last_string_value := text 
when 25 then
	yy_column := yy_column + 4
	yy_position := yy_position + 4
--|#line 112 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 112")
end
 last_token := TOK_ENUM; last_string_value := text 
when 26 then
	yy_column := yy_column + 6
	yy_position := yy_position + 6
--|#line 113 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 113")
end
 last_token := TOK_EXTERN; last_string_value := text 
when 27 then
	yy_column := yy_column + 5
	yy_position := yy_position + 5
--|#line 114 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 114")
end
 last_token := TOK_FLOAT; last_string_value := text 
when 28 then
	yy_column := yy_column + 3
	yy_position := yy_position + 3
--|#line 115 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 115")
end
 last_token := TOK_FOR; last_string_value := text 
when 29 then
	yy_column := yy_column + 4
	yy_position := yy_position + 4
--|#line 116 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 116")
end
 last_token := TOK_GOTO; last_string_value := text 
when 30 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 117 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 117")
end
 last_token := TOK_IF; last_string_value := text 
when 31 then
	yy_column := yy_column + 3
	yy_position := yy_position + 3
--|#line 118 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 118")
end
 last_token := TOK_INT; last_string_value := text 
when 32 then
	yy_column := yy_column + 5
	yy_position := yy_position + 5
--|#line 119 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 119")
end
 last_token := TOK_INT; last_string_value := text 
when 33 then
	yy_column := yy_column + 4
	yy_position := yy_position + 4
--|#line 120 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 120")
end
 last_token := TOK_LONG; last_string_value := text 
when 34 then
	yy_column := yy_column + 8
	yy_position := yy_position + 8
--|#line 121 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 121")
end
 last_token := TOK_REGISTER; last_string_value := text 
when 35 then
	yy_column := yy_column + 6
	yy_position := yy_position + 6
--|#line 122 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 122")
end
 last_token := TOK_RETURN; last_string_value := text 
when 36 then
	yy_column := yy_column + 5
	yy_position := yy_position + 5
--|#line 123 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 123")
end
 last_token := TOK_SHORT; last_string_value := text 
when 37 then
	yy_column := yy_column + 6
	yy_position := yy_position + 6
--|#line 124 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 124")
end
 last_token := TOK_SIGNED; last_string_value := text 
when 38 then
	yy_column := yy_column + 6
	yy_position := yy_position + 6
--|#line 125 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 125")
end
 last_token := TOK_SIZEOF; last_string_value := text 
when 39 then
	yy_column := yy_column + 6
	yy_position := yy_position + 6
--|#line 126 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 126")
end
 last_token := TOK_STATIC; last_string_value := text 
when 40 then
	yy_column := yy_column + 6
	yy_position := yy_position + 6
--|#line 127 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 127")
end
 last_token := TOK_INLINE; last_string_value := text 
when 41 then
	yy_column := yy_column + 6
	yy_position := yy_position + 6
--|#line 128 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 128")
end
 last_token := TOK_STRUCT; last_string_value := text 
when 42 then
	yy_column := yy_column + 6
	yy_position := yy_position + 6
--|#line 129 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 129")
end
 last_token := TOK_SWITCH; last_string_value := text 
when 43 then
	yy_column := yy_column + 7
	yy_position := yy_position + 7
--|#line 130 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 130")
end
 last_token := TOK_TYPEDEF; last_string_value := text 
when 44 then
	yy_column := yy_column + 5
	yy_position := yy_position + 5
--|#line 131 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 131")
end
 last_token := TOK_UNION; last_string_value := text 
when 45 then
	yy_column := yy_column + 8
	yy_position := yy_position + 8
--|#line 132 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 132")
end
 last_token := TOK_UNSIGNED; last_string_value := text 
when 46 then
	yy_column := yy_column + 4
	yy_position := yy_position + 4
--|#line 133 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 133")
end
 last_token := TOK_VOID; last_string_value := text 
when 47 then
	yy_column := yy_column + 8
	yy_position := yy_position + 8
--|#line 134 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 134")
end
 last_token := TOK_VOLATILE; last_string_value := text 
when 48 then
	yy_column := yy_column + 5
	yy_position := yy_position + 5
--|#line 135 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 135")
end
 last_token := TOK_WHILE; last_string_value := text 
when 49 then
	yy_column := yy_column + 10
	yy_position := yy_position + 10
--|#line 136 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 136")
end

				-- gcc extension
				last_token := TOK_SIGNED; last_string_value := text 			   
when 50 then
	yy_column := yy_column + 13
	yy_position := yy_position + 13
--|#line 141 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 141")
end
 
when 51 then
	yy_column := yy_column + 7
	yy_position := yy_position + 7
--|#line 144 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 144")
end
 last_token := TOK_CONST; last_string_value := text 
when 52 then
	yy_column := yy_column + 10
	yy_position := yy_position + 10
--|#line 145 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 145")
end
 
when 53 then
	yy_column := yy_column + 13
	yy_position := yy_position + 13
--|#line 146 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 146")
end

				 -- eat, hopefully this thing is not usefull for us
					gcc_attribute_bracket_counter := 0
					set_start_condition (SC_GCC_ATTRIBUTE)
				
when 54 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 152 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 152")
end

				gcc_attribute_bracket_counter := gcc_attribute_bracket_counter + 1
			 
when 55 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 155 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 155")
end

				gcc_attribute_bracket_counter := gcc_attribute_bracket_counter - 1
				if gcc_attribute_bracket_counter = 0 then
					set_start_condition (INITIAL)
				end
			 
when 56 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 161 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 161")
end

when 57 then
	yy_column := yy_column + 8
	yy_position := yy_position + 8
--|#line 163 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 163")
end

when 58 then
	yy_column := yy_column + 10
	yy_position := yy_position + 10
--|#line 165 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 165")
end

when 59 then
	yy_column := yy_column + 6
	yy_position := yy_position + 6
--|#line 168 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 168")
end

					if is_msc_extensions_enabled then
						last_token := TOK_CL_INT_8
						last_string_value := text
					else
						report_type_or_identifier (text)
					end
				
when 60 then
	yy_column := yy_column + 7
	yy_position := yy_position + 7
--|#line 176 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 176")
end

					if is_msc_extensions_enabled then
						last_token := TOK_CL_INT_16
						last_string_value := text
					else
						report_type_or_identifier (text)
					end
				
when 61 then
	yy_column := yy_column + 7
	yy_position := yy_position + 7
--|#line 184 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 184")
end

					if is_msc_extensions_enabled then
						last_token := TOK_CL_INT_32
						last_string_value := text
					else
						report_type_or_identifier (text)
					end
				
when 62 then
	yy_column := yy_column + 7
	yy_position := yy_position + 7
--|#line 192 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 192")
end

					if is_msc_extensions_enabled then
						last_token := TOK_CL_INT_64
						last_string_value := text
					else
						report_type_or_identifier (text)
					end
				
when 63 then
	yy_column := yy_column + 7
	yy_position := yy_position + 7
--|#line 200 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 200")
end

					if is_msc_extensions_enabled then
						-- ignore, we don't need it
					else
						report_type_or_identifier (text)
					end
				
when 64 then
	yy_column := yy_column + 10
	yy_position := yy_position + 10
--|#line 207 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 207")
end

					if is_msc_extensions_enabled then
						last_token := TOK_CL_FASTCALL
						last_string_value := text
					else
						report_type_or_identifier (text)
					end
				
when 65 then
	yy_column := yy_column + 7
	yy_position := yy_position + 7
--|#line 215 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 215")
end

					if is_msc_extensions_enabled then
						-- last_token := TOK_CL_BASED
						-- last_string_value := text
						-- ignore, we don't need it
					else
						report_type_or_identifier (text)
					end
				
when 66 then
	yy_column := yy_column + 5
	yy_position := yy_position + 5
--|#line 224 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 224")
end

					if is_msc_extensions_enabled then
						last_token := TOK_CL_ASM
						last_string_value := text
					else
						-- This is a gcc extension, we ignore it
						gcc_attribute_bracket_counter := 0
						set_start_condition (SC_GCC_ATTRIBUTE)
					end
				
when 67 then
	yy_column := yy_column + 4
	yy_position := yy_position + 4
--|#line 234 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 234")
end

					if is_msc_extensions_enabled then
						last_token := TOK_CL_ASM
						last_string_value := text
					else
						report_type_or_identifier (text)
					end
				
when 68 then
	yy_column := yy_column + 7
	yy_position := yy_position + 7
--|#line 242 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 242")
end

					if is_msc_extensions_enabled then
						-- last_token := TOK_CL_INLINE
						-- last_string_value := text
						-- ignore, we don't need it
					else
						report_type_or_identifier (text)
					end
				
when 69 then
	yy_column := yy_column + 7
	yy_position := yy_position + 7
--|#line 251 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 251")
end

					if is_msc_extensions_enabled then
						last_token := TOK_CL_CDECL
						last_string_value := text
					else
						report_type_or_identifier (text)
					end
				
when 70 then
	yy_column := yy_column + 6
	yy_position := yy_position + 6
--|#line 259 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 259")
end

					if is_msc_extensions_enabled then
						last_token := TOK_CL_CDECL
						last_string_value := text
					else
						report_type_or_identifier (text)
					end
				
when 71 then
	yy_column := yy_column + 9
	yy_position := yy_position + 9
--|#line 267 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 267")
end

					if is_msc_extensions_enabled then
						last_token := TOK_CL_STDCALL
						last_string_value := text
					else
						report_type_or_identifier (text)
					end
				
when 72 then
	yy_column := yy_column + 8
	yy_position := yy_position + 8
--|#line 275 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 275")
end

					if is_msc_extensions_enabled then
						last_token := TOK_CL_STDCALL
						last_string_value := text
					else
						report_type_or_identifier (text)
					end
					
when 73 then
	yy_column := yy_column + 12
	yy_position := yy_position + 12
--|#line 283 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 283")
end

					if is_msc_extensions_enabled then
						-- ignore, we don't need it
					else
						report_type_or_identifier (text)
					end
					
when 74 then
	yy_column := yy_column + 13
	yy_position := yy_position + 13
--|#line 290 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 290")
end

					if is_msc_extensions_enabled then
						-- ignore, we don't need it
					else
						report_type_or_identifier (text)
					end
					
when 75 then
	yy_column := yy_column + 5
	yy_position := yy_position + 5
--|#line 298 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 298")
end
 
when 76 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 300 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 300")
end
 report_type_or_identifier (text)	
when 77 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 302 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 302")
end
 last_token := TOK_CONSTANT; last_string_value := text 
when 78 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 303 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 303")
end
 last_token := TOK_CONSTANT; last_string_value := text 
when 79 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 304 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 304")
end
 last_token := TOK_CONSTANT; last_string_value := text 
when 80 then
yy_set_line_column
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 305 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 305")
end
 last_token := TOK_CONSTANT; last_string_value := text 
when 81 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 307 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 307")
end
 last_token := TOK_CONSTANT; last_string_value := text 
when 82 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 308 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 308")
end
 last_token := TOK_CONSTANT; last_string_value := text 
when 83 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 309 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 309")
end
 last_token := TOK_CONSTANT; last_string_value := text 
when 84 then
yy_set_line_column
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 311 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 311")
end
 last_token := TOK_STRING_LITERAL; last_string_value := text 
when 85 then
	yy_column := yy_column + 3
	yy_position := yy_position + 3
--|#line 313 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 313")
end
 last_token := TOK_ELLIPSIS; last_string_value := text 
when 86 then
	yy_column := yy_column + 3
	yy_position := yy_position + 3
--|#line 314 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 314")
end
 last_token := TOK_RIGHT_ASSIGN; last_string_value := text 
when 87 then
	yy_column := yy_column + 3
	yy_position := yy_position + 3
--|#line 315 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 315")
end
 last_token := TOK_LEFT_ASSIGN; last_string_value := text 
when 88 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 316 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 316")
end
 last_token := TOK_ADD_ASSIGN; last_string_value := text 
when 89 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 317 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 317")
end
 last_token := TOK_SUB_ASSIGN; last_string_value := text 
when 90 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 318 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 318")
end
 last_token := TOK_MUL_ASSIGN; last_string_value := text 
when 91 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 319 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 319")
end
 last_token := TOK_DIV_ASSIGN; last_string_value := text 
when 92 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 320 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 320")
end
 last_token := TOK_MOD_ASSIGN; last_string_value := text 
when 93 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 321 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 321")
end
 last_token := TOK_AND_ASSIGN; last_string_value := text 
when 94 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 322 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 322")
end
 last_token := TOK_XOR_ASSIGN; last_string_value := text 
when 95 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 323 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 323")
end
 last_token := TOK_OR_ASSIGN; last_string_value := text 
when 96 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 324 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 324")
end
 last_token := TOK_RIGHT_OP; last_string_value := text 
when 97 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 325 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 325")
end
 last_token := TOK_LEFT_OP; last_string_value := text 
when 98 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 326 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 326")
end
 last_token := TOK_INC_OP; last_string_value := text 
when 99 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 327 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 327")
end
 last_token := TOK_DEC_OP; last_string_value := text 
when 100 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 328 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 328")
end
 last_token := TOK_PTR_OP; last_string_value := text 
when 101 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 329 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 329")
end
 last_token := TOK_AND_OP; last_string_value := text 
when 102 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 330 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 330")
end
 last_token := TOK_OR_OP; last_string_value := text 
when 103 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 331 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 331")
end
 last_token := TOK_LE_OP; last_string_value := text 
when 104 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 332 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 332")
end
 last_token := TOK_GE_OP; last_string_value := text 
when 105 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 333 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 333")
end
 last_token := TOK_EQ_OP; last_string_value := text 
when 106 then
	yy_column := yy_column + 2
	yy_position := yy_position + 2
--|#line 334 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 334")
end
 last_token := TOK_NE_OP; last_string_value := text 
when 107 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 336 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 336")
end
 last_token := Semicolon_code; last_string_value := text
when 108 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 337 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 337")
end
 last_token := Left_brace_code; last_string_value := text 
when 109 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 338 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 338")
end
 last_token := Right_brace_code; last_string_value := text 
when 110 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 339 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 339")
end
 last_token := Comma_code; last_string_value := text 
when 111 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 340 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 340")
end
 last_token := Colon_code; last_string_value := text 
when 112 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 341 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 341")
end
 last_token := Equal_code; last_string_value := text 
when 113 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 342 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 342")
end
 last_token := Left_parenthesis_code; last_string_value := text 
when 114 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 343 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 343")
end
 last_token := Right_parenthesis_code; last_string_value := text 
when 115 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 344 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 344")
end
 last_token := Left_bracket_code; last_string_value := text 
when 116 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
	yy_position := yy_position + yy_end - yy_start - yy_more_len
--|#line 345 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 345")
end
 last_token := Right_bracket_code; last_string_value := text 
when 117 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 346 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 346")
end
 last_token := Dot_code; last_string_value := text 
when 118 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 347 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 347")
end
 last_token := 38; last_string_value := text 
when 119 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 348 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 348")
end
 last_token := Exclamation_code; last_string_value := text 
when 120 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 349 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 349")
end
 last_token := 126; last_string_value := text 
when 121 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 350 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 350")
end
 last_token := Minus_code; last_string_value := text 
when 122 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 351 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 351")
end
 last_token := Plus_code; last_string_value := text 
when 123 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 352 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 352")
end
 last_token := Star_code; last_string_value := text 
when 124 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 353 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 353")
end
 last_token := Slash_code; last_string_value := text 
when 125 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 354 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 354")
end
 last_token := 37; last_string_value := text 
when 126 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 355 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 355")
end
 last_token := Less_than_code; last_string_value := text 
when 127 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 356 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 356")
end
 last_token := Greater_than_code; last_string_value := text 
when 128 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 357 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 357")
end
 last_token := Caret_code; last_string_value := text 
when 129 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 358 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 358")
end
 last_token := Bar_code; last_string_value := text 
when 130 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 359 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 359")
end
 last_token := Question_mark_code; last_string_value := text 
when 131 then
yy_set_line_column
	yy_position := yy_position + 1
--|#line 361 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 361")
end
 
when 132 then
	yy_column := yy_column + 1
	yy_position := yy_position + 1
--|#line 362 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 362")
end
 
when 133 then
yy_set_line_column
	yy_position := yy_position + 1
--|#line 0 "ewg_c_scanner.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'ewg_c_scanner.l' at line 0")
end
default_action
			else
				last_token := yyError_token
				fatal_error ("fatal scanner internal error: no action found")
			end
			yy_set_beginning_of_line
		end

	yy_execute_eof_action (yy_sc: INTEGER)
			-- Execute EOF semantic action.
		do
			terminate
		end

feature {NONE} -- Table templates

	yy_nxt_template: SPECIAL [INTEGER]
			-- Template for `yy_nxt'
		local
			an_array: ARRAY [INTEGER]
		once
			create an_array.make_filled (0, 0, 1040)
			yy_nxt_template_1 (an_array)
			yy_nxt_template_2 (an_array)
			yy_nxt_template_3 (an_array)
			yy_nxt_template_4 (an_array)
			yy_nxt_template_5 (an_array)
			yy_nxt_template_6 (an_array)
			Result := yy_fixed_array (an_array)
		end

	yy_nxt_template_1 (an_array: ARRAY [INTEGER])
			-- Fill chunk #1 of template for `yy_nxt'.
		do
			yy_array_subcopy (an_array, <<
			    0,   12,   13,   14,   13,   15,   16,   12,   17,   18,
			   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,
			   29,   29,   29,   29,   29,   29,   29,   30,   31,   32,
			   33,   34,   35,   36,   36,   36,   36,   36,   37,   36,
			   36,   38,   12,   39,   40,   41,   42,   43,   44,   45,
			   46,   47,   48,   36,   49,   36,   50,   36,   36,   36,
			   36,   51,   52,   53,   54,   55,   56,   36,   36,   36,
			   57,   58,   59,   60,   61,  456,   64,   65,   83,   62,
			   66,   67,   64,   65,   65,   92,   66,   67,   69,   69,
			   70,   70,   76,   77,   65,   87,   65,  455,   65,   85,

			   86,   93,   76,   77,   79,   80,   79,   80,   94,  112,
			  113,   71,   71,   82,   84,  107,   88,  115,  137,  454,
			   72,   72,   95,   96,   97,  138,   98,   98,   98,   98,
			   98,   98,   98,   98,  108,  126,  109,  110,  129,  131,
			  134,  132,  127,  135,  151,  149,  154,  130,  128,  152,
			  133,  155,   73,   73,   74,   74,  100,  163,  101,  101,
			  101,  101,  101,  101,  101,  101,  158,  159,  158,   83,
			  117,  453,  167,  457,  102,  141,  142,  103,  103,  104,
			   89,  118,  119,  213,  120,  143,  150,  121,  144,  102,
			  122,  216,  210,  164,  214,  103,  240,  241,  123,  211, yy_Dummy>>,
			1, 200, 0)
		end

	yy_nxt_template_2 (an_array: ARRAY [INTEGER])
			-- Fill chunk #2 of template for `yy_nxt'.
		do
			yy_array_subcopy (an_array, <<
			  103,  103,  218,  103,   90,   84,  104,  100,  217,  105,
			  105,  105,  105,  105,  105,  105,  105,  219,  103,  222,
			  160,  224,  452,  225,  161,  102,  103,  223,  103,  103,
			  151,  154,  159,  159,  159,  152,  155,  264,  265,  451,
			  102,  163,  243,  290,  290,  290,  103,  158,  159,  158,
			  174,  174,  244,  247,  103,   98,   98,   98,   98,   98,
			   98,   98,   98,  305,  424,  450,  248,  425,  174,  449,
			  306,  169,  170,  175,  170,  175,  174,  164,  176,  176,
			  176,  176,  176,  176,  176,  176,  169,  170,  237,  448,
			  237,  447,  170,  171,  171,  171,  171,  171,  171,  171,

			  171,  160,  446,  237,  445,  161,  252,  444,  237,  172,
			  173,  231,  173,  231,  443,  253,  232,  232,  232,  232,
			  232,  232,  232,  232,  172,  173,  233,  234,  442,  234,
			  173,  100,  441,  101,  101,  101,  101,  101,  101,  101,
			  101,  233,  234,  440,  439,  238,  238,  234,  438,  102,
			  238,  238,  174,  174,  176,  176,  176,  176,  176,  176,
			  176,  176,  437,  238,  102,  289,  290,  289,  238,  337,
			  174,  238,  424,  290,  290,  290,  238,  337,  174,  181,
			  182,  183,  184,  185,  186,  435,  349,  187,  350,  434,
			  433,  351,  352,  188,  189,  190,  376,  377,  376,  191, yy_Dummy>>,
			1, 200, 200)
		end

	yy_nxt_template_3 (an_array: ARRAY [INTEGER])
			-- Fill chunk #3 of template for `yy_nxt'.
		do
			yy_array_subcopy (an_array, <<
			  158,  159,  158,  235,  432,  235,  431,  430,  236,  236,
			  236,  236,  236,  236,  236,  236,  429,  227,  227,  227,
			  227,  227,  227,  227,  227,  289,  290,  289,  232,  232,
			  232,  232,  232,  232,  232,  232,  170,  428,  170,  377,
			  377,  377,  227,  227,  227,  227,  227,  227,  227,  227,
			  427,  170,  293,  426,  293,  421,  170,  294,  294,  294,
			  294,  294,  294,  294,  294,  236,  236,  236,  236,  236,
			  236,  236,  236,  173,  420,  173,  294,  294,  294,  294,
			  294,  294,  294,  294,  234,  419,  234,  418,  173,  423,
			  423,  423,  417,  173,  422,  423,  422,  416,  436,  234,

			  415,  414,  413,  412,  234,  376,  377,  376,  423,  423,
			  423,  411,  436,  177,  177,  177,  177,  177,  410,  409,
			  408,  407,  404,  404,  404,  404,  404,  404,  404,  404,
			  422,  423,  422,  228,  228,  406,  403,  228,  228,  228,
			  176,  176,  176,  402,  176,  401,  176,  404,  404,  404,
			  404,  404,  404,  404,  404,   63,   63,   63,   63,   63,
			   63,   63,   63,   63,   63,   63,   63,   63,   63,   63,
			   63,   68,   68,   68,   68,   68,   68,   68,   68,   68,
			   68,   68,   68,   68,   68,   68,   68,   75,   75,   75,
			   75,   75,   75,   75,   75,   75,   75,   75,   75,   75, yy_Dummy>>,
			1, 200, 400)
		end

	yy_nxt_template_4 (an_array: ARRAY [INTEGER])
			-- Fill chunk #4 of template for `yy_nxt'.
		do
			yy_array_subcopy (an_array, <<
			   75,   75,   75,   78,   78,   78,   78,   78,   78,   78,
			   78,   78,   78,   78,   78,   78,   78,   78,   78,   82,
			   82,   82,   82,   82,   82,   82,   82,   82,   82,   82,
			   82,   82,   82,   82,   82,   89,   89,   89,   89,  400,
			   89,   89,   89,   89,   89,   89,   89,   89,   89,   89,
			   89,  114,  114,  114,  114,  114,  114,  114,  114,  114,
			  114,  114,  152,  152,  399,  152,  152,  152,  152,  152,
			  152,  152,  152,  152,  152,  152,  152,  152,  153,  153,
			  398,  397,  153,  153,  153,  153,  153,  153,  153,  153,
			  153,  153,  153,  153,  156,  156,  156,  156,  156,  156,

			  156,  156,  156,  156,  156,  156,  156,  156,  156,  156,
			  162,  162,  162,  162,  162,  162,  162,  162,  162,  162,
			  162,  162,  162,  162,  162,  162,  232,  232,  232,  396,
			  232,  395,  232,  236,  236,  236,  394,  236,  393,  236,
			  294,  294,  294,  392,  294,  391,  294,  405,  405,  390,
			  389,  405,  405,  405,  406,  406,  406,  406,  406,  406,
			  406,  406,  406,  406,  406,  406,  406,  406,  406,  406,
			  425,  425,  425,  425,  425,  425,  425,  425,  425,  425,
			  425,  425,  425,  425,  425,  425,  388,  387,  386,  385,
			  384,  383,  382,  381,  380,  379,  378,  375,  374,  373, yy_Dummy>>,
			1, 200, 600)
		end

	yy_nxt_template_5 (an_array: ARRAY [INTEGER])
			-- Fill chunk #5 of template for `yy_nxt'.
		do
			yy_array_subcopy (an_array, <<
			  372,  371,  370,  369,  368,  367,  366,  365,  364,  363,
			  362,  361,  360,  359,  358,  357,  356,  355,  354,  353,
			  348,  347,  346,  345,  344,  343,  342,  341,  340,  339,
			  338,  336,  335,  334,  333,  332,  331,  330,  329,  328,
			  327,  326,  325,  324,  323,  322,  321,  320,  319,  318,
			  317,  316,  315,  314,  313,  312,  311,  310,  309,  308,
			  307,  304,  303,  302,  301,  300,  299,  298,  297,  296,
			  295,  292,  291,  288,  287,  286,  285,  284,  283,  282,
			  281,  280,  279,  278,  277,  276,  275,  274,  273,  272,
			  271,  270,  269,  268,  267,  266,  263,  262,  261,  260,

			  259,  258,  257,  256,  255,  254,  251,  250,  249,  246,
			  245,  242,  239,  457,  230,  229,  157,  226,  221,  220,
			  215,  212,  209,  208,  207,  206,  205,  204,  203,  202,
			  201,  200,  199,  198,  197,  196,  195,  194,  193,  192,
			  180,   90,  179,  178,  168,  457,  162,  166,  165,  157,
			  148,  147,  146,  145,  140,  139,  136,  125,  124,  116,
			  111,  106,   99,   91,   90,   81,  457,   11,  457,  457,
			  457,  457,  457,  457,  457,  457,  457,  457,  457,  457,
			  457,  457,  457,  457,  457,  457,  457,  457,  457,  457,
			  457,  457,  457,  457,  457,  457,  457,  457,  457,  457, yy_Dummy>>,
			1, 200, 800)
		end

	yy_nxt_template_6 (an_array: ARRAY [INTEGER])
			-- Fill chunk #6 of template for `yy_nxt'.
		do
			yy_array_subcopy (an_array, <<
			  457,  457,  457,  457,  457,  457,  457,  457,  457,  457,
			  457,  457,  457,  457,  457,  457,  457,  457,  457,  457,
			  457,  457,  457,  457,  457,  457,  457,  457,  457,  457,
			  457,  457,  457,  457,  457,  457,  457,  457,  457,  457,
			  457, yy_Dummy>>,
			1, 41, 1000)
		end

	yy_chk_template: SPECIAL [INTEGER]
			-- Template for `yy_chk'
		local
			an_array: ARRAY [INTEGER]
		once
			create an_array.make_filled (0, 0, 1040)
			yy_chk_template_1 (an_array)
			yy_chk_template_2 (an_array)
			yy_chk_template_3 (an_array)
			yy_chk_template_4 (an_array)
			yy_chk_template_5 (an_array)
			yy_chk_template_6 (an_array)
			Result := yy_fixed_array (an_array)
		end

	yy_chk_template_1 (an_array: ARRAY [INTEGER])
			-- Fill chunk #1 of template for `yy_chk'.
		do
			yy_array_subcopy (an_array, <<
			    0,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    2,  452,    3,    3,   16,    2,
			    3,    3,    4,    4,    7,   23,    4,    4,    5,    6,
			    5,    6,    7,    7,    8,   18,    9,  451,   10,   17,

			   17,   23,    8,    8,    9,    9,   10,   10,   25,   34,
			   34,    5,    6,   37,   16,   32,   18,   37,   49,  450,
			    5,    6,   25,   25,   26,   49,   26,   26,   26,   26,
			   26,   26,   26,   26,   32,   44,   32,   32,   45,   46,
			   47,   46,   44,   47,   61,   58,   64,   45,   44,   61,
			   46,   64,    5,    6,    5,    6,   28,   69,   28,   28,
			   28,   28,   28,   28,   28,   28,   67,   67,   67,   82,
			   41,  449,   89,   90,   28,   52,   52,   28,   28,   28,
			   90,   41,   41,  140,   41,   52,   58,   41,   52,   28,
			   41,  142,  138,   69,  140,   28,  181,  181,   41,  138, yy_Dummy>>,
			1, 200, 0)
		end

	yy_chk_template_2 (an_array: ARRAY [INTEGER])
			-- Fill chunk #2 of template for `yy_chk'.
		do
			yy_array_subcopy (an_array, <<
			  103,  103,  143,   28,   89,   82,   28,   29,  142,   29,
			   29,   29,   29,   29,   29,   29,   29,  143,  103,  146,
			   67,  147,  448,  147,   67,   29,  103,  146,   29,   29,
			  151,  154,  159,  159,  159,  151,  154,  201,  201,  447,
			   29,  162,  183,  228,  228,  228,   29,  155,  155,  155,
			  174,  174,  183,  186,   29,   98,   98,   98,   98,   98,
			   98,   98,   98,  249,  406,  446,  186,  406,  174,  445,
			  249,   98,   98,  102,   98,  102,  174,  162,  102,  102,
			  102,  102,  102,  102,  102,  102,   98,   98,  176,  441,
			  176,  439,   98,  100,  100,  100,  100,  100,  100,  100,

			  100,  155,  437,  176,  435,  155,  190,  433,  176,  100,
			  100,  169,  100,  169,  432,  190,  169,  169,  169,  169,
			  169,  169,  169,  169,  100,  100,  171,  171,  431,  171,
			  100,  101,  430,  101,  101,  101,  101,  101,  101,  101,
			  101,  171,  171,  429,  428,  177,  177,  171,  427,  101,
			  238,  238,  101,  101,  175,  175,  175,  175,  175,  175,
			  175,  175,  426,  177,  101,  289,  289,  289,  238,  289,
			  101,  177,  425,  290,  290,  290,  238,  290,  101,  118,
			  118,  118,  118,  118,  118,  416,  306,  118,  306,  415,
			  414,  306,  306,  118,  118,  118,  338,  338,  338,  118, yy_Dummy>>,
			1, 200, 200)
		end

	yy_chk_template_3 (an_array: ARRAY [INTEGER])
			-- Fill chunk #3 of template for `yy_chk'.
		do
			yy_array_subcopy (an_array, <<
			  158,  158,  158,  172,  413,  172,  412,  411,  172,  172,
			  172,  172,  172,  172,  172,  172,  410,  158,  158,  158,
			  158,  158,  158,  158,  158,  227,  227,  227,  231,  231,
			  231,  231,  231,  231,  231,  231,  232,  409,  232,  377,
			  377,  377,  227,  227,  227,  227,  227,  227,  227,  227,
			  408,  232,  233,  407,  233,  403,  232,  233,  233,  233,
			  233,  233,  233,  233,  233,  235,  235,  235,  235,  235,
			  235,  235,  235,  236,  402,  236,  293,  293,  293,  293,
			  293,  293,  293,  293,  294,  400,  294,  398,  236,  405,
			  405,  405,  397,  236,  422,  422,  422,  395,  422,  294,

			  394,  393,  392,  387,  294,  376,  376,  376,  423,  423,
			  423,  386,  423,  469,  469,  469,  469,  469,  385,  384,
			  383,  379,  376,  376,  376,  376,  376,  376,  376,  376,
			  404,  404,  404,  470,  470,  378,  375,  470,  470,  470,
			  471,  471,  471,  374,  471,  373,  471,  404,  404,  404,
			  404,  404,  404,  404,  404,  458,  458,  458,  458,  458,
			  458,  458,  458,  458,  458,  458,  458,  458,  458,  458,
			  458,  459,  459,  459,  459,  459,  459,  459,  459,  459,
			  459,  459,  459,  459,  459,  459,  459,  460,  460,  460,
			  460,  460,  460,  460,  460,  460,  460,  460,  460,  460, yy_Dummy>>,
			1, 200, 400)
		end

	yy_chk_template_4 (an_array: ARRAY [INTEGER])
			-- Fill chunk #4 of template for `yy_chk'.
		do
			yy_array_subcopy (an_array, <<
			  460,  460,  460,  461,  461,  461,  461,  461,  461,  461,
			  461,  461,  461,  461,  461,  461,  461,  461,  461,  462,
			  462,  462,  462,  462,  462,  462,  462,  462,  462,  462,
			  462,  462,  462,  462,  462,  463,  463,  463,  463,  366,
			  463,  463,  463,  463,  463,  463,  463,  463,  463,  463,
			  463,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  465,  465,  362,  465,  465,  465,  465,  465,
			  465,  465,  465,  465,  465,  465,  465,  465,  466,  466,
			  361,  360,  466,  466,  466,  466,  466,  466,  466,  466,
			  466,  466,  466,  466,  467,  467,  467,  467,  467,  467,

			  467,  467,  467,  467,  467,  467,  467,  467,  467,  467,
			  468,  468,  468,  468,  468,  468,  468,  468,  468,  468,
			  468,  468,  468,  468,  468,  468,  472,  472,  472,  359,
			  472,  358,  472,  473,  473,  473,  356,  473,  355,  473,
			  474,  474,  474,  354,  474,  353,  474,  475,  475,  351,
			  350,  475,  475,  475,  476,  476,  476,  476,  476,  476,
			  476,  476,  476,  476,  476,  476,  476,  476,  476,  476,
			  477,  477,  477,  477,  477,  477,  477,  477,  477,  477,
			  477,  477,  477,  477,  477,  477,  349,  348,  347,  346,
			  345,  344,  343,  342,  341,  340,  339,  335,  334,  332, yy_Dummy>>,
			1, 200, 600)
		end

	yy_chk_template_5 (an_array: ARRAY [INTEGER])
			-- Fill chunk #5 of template for `yy_chk'.
		do
			yy_array_subcopy (an_array, <<
			  331,  330,  329,  328,  327,  325,  324,  323,  321,  320,
			  319,  318,  315,  314,  313,  312,  310,  309,  308,  307,
			  305,  304,  303,  302,  301,  300,  299,  298,  297,  292,
			  291,  288,  287,  285,  284,  283,  282,  281,  280,  279,
			  278,  277,  276,  275,  273,  271,  270,  267,  266,  265,
			  264,  261,  259,  258,  257,  256,  254,  253,  252,  251,
			  250,  248,  247,  246,  245,  244,  243,  242,  241,  240,
			  239,  230,  229,  226,  225,  224,  223,  222,  221,  220,
			  219,  218,  217,  216,  215,  214,  213,  212,  210,  209,
			  207,  206,  205,  204,  203,  202,  200,  199,  198,  197,

			  196,  195,  194,  193,  192,  191,  189,  188,  187,  185,
			  184,  182,  180,  164,  161,  160,  156,  148,  145,  144,
			  141,  139,  136,  135,  134,  133,  132,  131,  130,  129,
			  128,  127,  126,  125,  124,  123,  122,  121,  120,  119,
			  117,  115,  113,  109,   97,   84,   72,   71,   70,   66,
			   56,   55,   54,   53,   51,   50,   48,   43,   42,   40,
			   33,   30,   27,   22,   19,   15,   11,  457,  457,  457,
			  457,  457,  457,  457,  457,  457,  457,  457,  457,  457,
			  457,  457,  457,  457,  457,  457,  457,  457,  457,  457,
			  457,  457,  457,  457,  457,  457,  457,  457,  457,  457, yy_Dummy>>,
			1, 200, 800)
		end

	yy_chk_template_6 (an_array: ARRAY [INTEGER])
			-- Fill chunk #6 of template for `yy_chk'.
		do
			yy_array_subcopy (an_array, <<
			  457,  457,  457,  457,  457,  457,  457,  457,  457,  457,
			  457,  457,  457,  457,  457,  457,  457,  457,  457,  457,
			  457,  457,  457,  457,  457,  457,  457,  457,  457,  457,
			  457,  457,  457,  457,  457,  457,  457,  457,  457,  457,
			  457, yy_Dummy>>,
			1, 41, 1000)
		end

	yy_base_template: SPECIAL [INTEGER]
			-- Template for `yy_base'
		local
			an_array: ARRAY [INTEGER]
		once
			create an_array.make_filled (0, 0, 477)
			yy_base_template_1 (an_array)
			yy_base_template_2 (an_array)
			yy_base_template_3 (an_array)
			Result := yy_fixed_array (an_array)
		end

	yy_base_template_1 (an_array: ARRAY [INTEGER])
			-- Fill chunk #1 of template for `yy_base'.
		do
			yy_array_subcopy (an_array, <<
			    0,    0,   72,   74,   80,   82,   83,   81,   91,   93,
			   95,  966,  967,  967,  967,  935,   72,   69,   86,  922,
			  967,  967,  933,   71,  967,   92,  107,  932,  139,  190,
			  930,  967,  107,  930,   79,  967,    0,  107,  967,  967,
			  929,  136,  894,  896,   89,   88,   83,   84,  897,   67,
			  896,  904,  122,  885,  894,  892,  897,  967,  115,  967,
			  967,  142,    0,    0,  144,  967,  946,  164,  967,  151,
			  917,  939,  940,  967,  967,  967,  967,  967,  967,  967,
			  967,  967,  163,  967,  942,  967,  967,  967,  967,  162,
			  170,  967,  967,  967,  967,  967,  967,  927,  236,  967,

			  274,  314,  259,  162,    0,    0,  967,  967,  967,  913,
			  967,  967,  967,  912,    0,  899,  967,  881,  333,  877,
			  889,  878,  878,  872,  871,  883,  870,  885,  872,  878,
			  864,  865,  862,  862,  865,  862,  859,    0,  136,  863,
			  131,  861,  139,  156,  865,  858,  165,  167,  863,  967,
			  967,  228,    0,    0,  229,  245,  913,  967,  398,  230,
			  861,  853,  235,  967,  910,  967,  967,  967,  967,  297,
			  967,  291,  389,  967,  212,  335,  252,  307,  967,  967,
			  853,  134,  865,  193,  860,  842,  207,  850,  844,  856,
			  252,  880,  847,  853,  841,  845,  851,  840,  852,  847, yy_Dummy>>,
			1, 200, 0)
		end

	yy_base_template_2 (an_array: ARRAY [INTEGER])
			-- Fill chunk #2 of template for `yy_base'.
		do
			yy_array_subcopy (an_array, <<
			  835,  175,  849,  847,  843,  835,  841,  844,    0,  830,
			  834,    0,  835,  832,  821,  823,  825,  832,  818,  816,
			  816,  828,  818,  822,  826,  828,  817,  423,  241,  814,
			  825,  409,  400,  438,  967,  446,  437,  967,  312,  814,
			  812,  805,  805,  816,  807,  816,  800,  800,  800,  207,
			  799,  797,  806,  808,  833,    0,  807,  806,  799,  804,
			    0,  796,    0,    0,  787,  795,  784,  791,    0,    0,
			  785,  782,    0,  786,    0,  781,  781,  778,  790,  780,
			  784,  789,  788,  786,  776,  781,    0,  769,  781,  363,
			  371,  780,  777,  457,  448,    0,    0,  767,  777,  778,

			  763,  768,  773,  759,  773,  766,  366,  794,  755,  759,
			  768,    0,  759,  764,  755,  766,    0,    0,  753,  754,
			  759,  750,    0,  757,  743,  747,    0,  755,  752,  754,
			  738,  747,  749,    0,  740,  743,    0,  967,  394,  739,
			  741,  745,  737,  729,  729,  732,  741,  738,  729,  761,
			  729,  726,    0,  722,  682,  688,  690,    0,  677,  679,
			  625,  616,  601,    0,    0,    0,  589,    0,    0,    0,
			    0,    0,    0,  494,  493,  480,  503,  437,  489,  474,
			    0,    0,    0,  460,  457,  472,  457,  453,    0,    0,
			    0,    0,  448,  452,  444,  439,    0,  436,  437,    0, yy_Dummy>>,
			1, 200, 200)
		end

	yy_base_template_3 (an_array: ARRAY [INTEGER])
			-- Fill chunk #3 of template for `yy_base'.
		do
			yy_array_subcopy (an_array, <<
			  424,    0,  425,  405,  528,  487,  261,  389,  400,  383,
			  360,  349,  361,  356,  345,  333,  329,    0,    0,    0,
			    0,    0,  492,  506,  967,  369,  299,  300,  285,  287,
			  276,  283,  251,  262,    0,  250,  967,  252,    0,  233,
			    0,  235,    0,    0,    0,  211,  220,  194,  164,  121,
			   74,   52,   25,    0,    0,    0,    0,  967,  554,  570,
			  586,  602,  618,  634,  645,  661,  677,  693,  709,  507,
			  531,  534,  720,  727,  734,  745,  753,  769, yy_Dummy>>,
			1, 78, 400)
		end

	yy_def_template: SPECIAL [INTEGER]
			-- Template for `yy_def'
		local
			an_array: ARRAY [INTEGER]
		once
			create an_array.make_filled (0, 0, 477)
			yy_def_template_1 (an_array)
			yy_def_template_2 (an_array)
			yy_def_template_3 (an_array)
			Result := yy_fixed_array (an_array)
		end

	yy_def_template_1 (an_array: ARRAY [INTEGER])
			-- Fill chunk #1 of template for `yy_def'.
		do
			yy_array_subcopy (an_array, <<
			    0,  457,    1,  458,  458,  459,  459,  460,  460,  461,
			  461,  457,  457,  457,  457,  457,  462,  457,  457,  463,
			  457,  457,  457,  457,  457,  457,  457,  457,  457,  457,
			  457,  457,  457,  457,  457,  457,  464,  464,  457,  457,
			  457,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  457,  457,  457,
			  457,  457,  465,  466,  466,  457,  467,  466,  457,  468,
			  457,  457,  457,  457,  457,  457,  457,  457,  457,  457,
			  457,  457,  462,  457,  462,  457,  457,  457,  457,  463,
			  463,  457,  457,  457,  457,  457,  457,  457,  457,  457,

			  457,  457,  457,  457,  469,   29,  457,  457,  457,  457,
			  457,  457,  457,  457,  464,  463,  457,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  457,
			  457,  457,  465,  466,  466,  466,  467,  457,  466,  470,
			  466,  466,  468,  457,  468,  457,  457,  457,  457,  457,
			  457,  100,  457,  457,  457,  457,  471,  469,  457,  457,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464, yy_Dummy>>,
			1, 200, 0)
		end

	yy_def_template_2 (an_array: ARRAY [INTEGER])
			-- Fill chunk #2 of template for `yy_def'.
		do
			yy_array_subcopy (an_array, <<
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  466,  470,  466,
			  466,  457,  472,  457,  457,  457,  473,  457,  457,  464,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  466,
			  457,  466,  466,  457,  474,  464,  464,  464,  464,  464,

			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  457,  466,  466,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  466,  475,  466,  464,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464, yy_Dummy>>,
			1, 200, 200)
		end

	yy_def_template_3 (an_array: ARRAY [INTEGER])
			-- Fill chunk #3 of template for `yy_def'.
		do
			yy_array_subcopy (an_array, <<
			  464,  464,  464,  464,  466,  475,  476,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  466,  457,  457,  477,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  457,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,  464,  464,  464,
			  464,  464,  464,  464,  464,  464,  464,    0,  457,  457,
			  457,  457,  457,  457,  457,  457,  457,  457,  457,  457,
			  457,  457,  457,  457,  457,  457,  457,  457, yy_Dummy>>,
			1, 78, 400)
		end

	yy_ec_template: SPECIAL [INTEGER]
			-- Template for `yy_ec'
		local
			an_array: ARRAY [INTEGER]
		once
			create an_array.make_filled (0, 0, 256)
			yy_ec_template_1 (an_array)
			yy_ec_template_2 (an_array)
			Result := yy_fixed_array (an_array)
		end

	yy_ec_template_1 (an_array: ARRAY [INTEGER])
			-- Fill chunk #1 of template for `yy_ec'.
		do
			yy_array_subcopy (an_array, <<
			    0,    1,    1,    1,    1,    1,    1,    1,    1,    2,
			    3,    1,    4,    4,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    2,    5,    6,    7,    1,    8,    9,   10,
			   11,   12,   13,   14,   15,   16,   17,   18,   19,   20,
			   21,   22,   23,   24,   25,   24,   26,   24,   27,   28,
			   29,   30,   31,   32,    1,   33,   34,   33,   33,   35,
			   36,   37,   37,   37,   37,   37,   38,   37,   37,   37,
			   37,   37,   37,   37,   37,   39,   37,   37,   40,   37,
			   37,   41,   42,   43,   44,   45,    1,   46,   47,   48,

			   49,   50,   51,   52,   53,   54,   37,   55,   56,   57,
			   58,   59,   60,   37,   61,   62,   63,   64,   65,   66,
			   67,   68,   69,   70,   71,   72,   73,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1, yy_Dummy>>,
			1, 200, 0)
		end

	yy_ec_template_2 (an_array: ARRAY [INTEGER])
			-- Fill chunk #2 of template for `yy_ec'.
		do
			yy_array_subcopy (an_array, <<
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1, yy_Dummy>>,
			1, 57, 200)
		end

	yy_meta_template: SPECIAL [INTEGER]
			-- Template for `yy_meta'
		once
			Result := yy_fixed_array (<<
			    0,    1,    2,    3,    2,    1,    4,    1,    1,    1,
			    5,    1,    1,    1,    1,    1,    1,    1,    1,    6,
			    6,    6,    6,    6,    6,    7,    8,    1,    1,    1,
			    1,    1,    1,    9,    9,    9,   10,   11,   12,   13,
			   14,    1,    1,    1,    1,   11,    9,    9,    9,    9,
			    9,   10,   11,   11,   11,   11,   12,   11,   11,   11,
			   11,   11,   11,   11,   11,   11,   11,   11,   15,   16,
			    1,    1,    1,    1, yy_Dummy>>)
		end

	yy_accept_template: SPECIAL [INTEGER]
			-- Template for `yy_accept'
		local
			an_array: ARRAY [INTEGER]
		once
			create an_array.make_filled (0, 0, 457)
			yy_accept_template_1 (an_array)
			yy_accept_template_2 (an_array)
			yy_accept_template_3 (an_array)
			Result := yy_fixed_array (an_array)
		end

	yy_accept_template_1 (an_array: ARRAY [INTEGER])
			-- Fill chunk #1 of template for `yy_accept'.
		do
			yy_array_subcopy (an_array, <<
			    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
			    0,  134,  132,  131,  131,  119,  132,  125,  118,  132,
			  113,  114,  123,  122,  110,  121,  117,  124,   79,   79,
			  111,  107,  126,  112,  127,  130,   76,   76,  115,  116,
			  128,   76,   76,   76,   76,   76,   76,   76,   76,   76,
			   76,   76,   76,   76,   76,   76,   76,  108,  129,  109,
			  120,  131,    1,    5,    5,  133,  133,    5,   10,   10,
			   10,   10,   10,    7,    8,   14,   12,   13,   56,   54,
			   55,  106,    0,   84,    0,   92,  109,  101,   93,    0,
			    0,   90,   98,   88,   99,   89,  100,    0,   82,   91,

			   83,   78,    0,   79,    0,   79,  116,  108,  115,   97,
			  103,  105,  104,   96,   76,    0,   94,   76,   76,   76,
			   76,   76,   76,   76,   76,   76,   76,   76,   76,   76,
			   22,   76,   76,   76,   76,   76,   76,   30,   76,   76,
			   76,   76,   76,   76,   76,   76,   76,   76,   76,   95,
			  102,    0,    1,    5,    5,    5,    0,    6,    5,    0,
			    5,    5,    0,    9,    0,    8,    7,   80,   85,    0,
			   82,   82,    0,   83,   78,    0,   81,   77,   87,   86,
			   76,   76,   76,   76,   76,   76,   76,   76,   76,   76,
			   76,   76,   76,   76,   76,   76,   76,   76,   76,   76, yy_Dummy>>,
			1, 200, 0)
		end

	yy_accept_template_2 (an_array: ARRAY [INTEGER])
			-- Fill chunk #2 of template for `yy_accept'.
		do
			yy_array_subcopy (an_array, <<
			   76,   76,   76,   76,   76,   76,   76,   76,   28,   76,
			   76,   31,   76,   76,   76,   76,   76,   76,   76,   76,
			   76,   76,   76,   76,   76,   76,   76,    5,    0,    5,
			    5,    0,   82,    0,   82,    0,   83,   81,   77,   76,
			   76,   76,   76,   76,   76,   76,   76,   76,   76,   76,
			   76,   76,   76,   76,   76,   67,   76,   76,   76,   76,
			   15,   76,   17,   18,   76,   76,   76,   76,   24,   25,
			   76,   76,   29,   76,   33,   76,   76,   76,   76,   76,
			   76,   76,   76,   76,   76,   76,   46,   76,   76,    5,
			    0,    5,    5,    0,   82,   32,   66,   76,   76,   76,

			   76,   76,   76,   76,   76,   76,   76,   76,   76,   76,
			   76,   75,   76,   76,   76,   76,   16,   19,   76,   76,
			   76,   76,   27,   76,   76,   76,   36,   76,   76,   76,
			   76,   76,   76,   44,   76,   76,   48,    2,    5,    5,
			   76,   76,   76,   76,   76,   76,   76,   76,   76,   76,
			   76,   76,   59,   76,   76,   76,   76,   70,   76,   76,
			   76,   76,   76,   23,   26,   40,   76,   35,   37,   38,
			   39,   41,   42,   76,   76,   76,    5,    0,    5,   76,
			   65,   69,   51,   76,   76,   76,   76,   76,   60,   61,
			   62,   63,   76,   76,   76,   76,   68,   76,   76,   21, yy_Dummy>>,
			1, 200, 200)
		end

	yy_accept_template_3 (an_array: ARRAY [INTEGER])
			-- Fill chunk #3 of template for `yy_accept'.
		do
			yy_array_subcopy (an_array, <<
			   76,   43,   76,   76,    5,    0,    5,   76,   76,   76,
			   76,   76,   57,   76,   76,   76,   76,   72,   20,   34,
			   45,   47,    5,    0,    4,    0,   76,   76,   76,   76,
			   76,   76,   76,   76,   71,   76,    3,   76,   11,   76,
			   64,   76,   58,   52,   49,   76,   76,   76,   76,   76,
			   76,   76,   76,   73,   53,   50,   74,    0, yy_Dummy>>,
			1, 58, 400)
		end

feature {NONE} -- Constants

	yyJam_base: INTEGER = 967
			-- Position in `yy_nxt'/`yy_chk' tables
			-- where default jam table starts

	yyJam_state: INTEGER = 457
			-- State id corresponding to jam state

	yyTemplate_mark: INTEGER = 458
			-- Mark between normal states and templates

	yyNull_equiv_class: INTEGER = 1
			-- Equivalence code for NULL character

	yyReject_used: BOOLEAN = false
			-- Is `reject' called?

	yyVariable_trail_context: BOOLEAN = false
			-- Is there a regular expression with
			-- both leading and trailing parts having
			-- variable length?

	yyReject_or_variable_trail_context: BOOLEAN = false
			-- Is `reject' called or is there a
			-- regular expression with both leading
			-- and trailing parts having variable length?

	yyNb_rules: INTEGER = 133
			-- Number of rules

	yyEnd_of_buffer: INTEGER = 134
			-- End of buffer rule code

	yyLine_used: BOOLEAN = true
			-- Are line and column numbers used?

	yyPosition_used: BOOLEAN = true
			-- Is `position' used?

	INITIAL: INTEGER = 0
	SC_FILE: INTEGER = 1
	SC_IMPL: INTEGER = 2
	SC_MSC_DECLSPEC: INTEGER = 3
	SC_GCC_ATTRIBUTE: INTEGER = 4
			-- Start condition codes

feature -- User-defined features


feature
end
