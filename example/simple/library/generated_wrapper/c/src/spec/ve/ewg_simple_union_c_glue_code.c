// This file has been generated by EWG. Do not edit. Changes will be lost!
// union glue code

// glue code for union `foo1'

#include<simple_header.h>

int ewg_union_sizeof_foo1 ()
{
	return sizeof (foo1);
}

int ewg_union_foo1_member_get_a(void* a_item)
{
	return ((foo1*)a_item)->a;
}

void ewg_union_foo1_member_set_a (void* a_item, int a_value)
{
	((foo1*)a_item)->a = (int)a_value;
}


