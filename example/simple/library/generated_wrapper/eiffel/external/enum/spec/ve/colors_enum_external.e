-- enum wrapper
class COLORS_ENUM_EXTERNAL

feature {ANY}

	is_valid_enum (a_value: INTEGER): BOOLEAN is
			-- Is `a_value' a valid integer code for this enum ?
		do
			Result := a_value = red or a_value = blue or a_value = green
		end

	red: INTEGER is
		external
			"C"
		alias
			"ewg_get_enum_colors_member_red"
		end

	blue: INTEGER is
		external
			"C"
		alias
			"ewg_get_enum_colors_member_blue"
		end

	green: INTEGER is
		external
			"C"
		alias
			"ewg_get_enum_colors_member_green"
		end

end
