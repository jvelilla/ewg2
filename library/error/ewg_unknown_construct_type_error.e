note

	description:

		"Error: Unknown construct type"

	copyright: "Copyright (c) 2004, Andreas Leitner and others"
	license: "Eiffel Forum License v2 (see forum.txt)"
	date: "$Date: 2008-05-14 22:48:16 +0900 (Wed, 14 May 2008) $"
	revision: "$Revision: 3 $"

class EWG_UNKNOWN_CONSTRUCT_TYPE_ERROR

inherit

	UT_ERROR

	EWG_CONFIG_ELEMENT_NAMES
		export {NONE} all end

	EWG_CONFIG_WRAPPER_TYPE_NAMES
		export {NONE} all end

create

	make

feature {NONE} -- Initialization

	make (an_element: XM_ELEMENT; a_position: XM_POSITION)
			-- Create an error reporting that the value of the attribute "name"
			-- in the "type" elmement `an_element' is unknown.
		require
			an_element_not_void: an_element /= Void
			an_element_has_option_as_name: STRING_.same_string (an_element.name, type_element_name)
			an_element_has_name_attribute: an_element.has_attribute_by_name (name_attribute_name)
			a_name_attribute_not_empty: an_element.attribute_by_name (name_attribute_name).value.count > 0
			a_position_not_void: a_position /= Void
		do
			create parameters.make (1, 2)
			parameters.put (an_element.attribute_by_name (name_attribute_name).value, 1)
			parameters.put (a_position.out, 2)
		end

feature -- Access

	default_template: STRING = "construct type '$1' in type-element is unknown $2"
			-- Default template used to built the error message

	code: STRING = "EWG0005"
			-- Error code

end
