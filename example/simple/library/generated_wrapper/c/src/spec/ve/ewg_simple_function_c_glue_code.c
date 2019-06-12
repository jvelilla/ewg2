#include <simple_header.h>

// Wraps call to function 'func1'
// For ve
void  ewg_function_func1 (int ewg_a, int ewg_b)
{
	func1 ((int)ewg_a, (int)ewg_b);
}

// Return address of function 'func1'
void* ewg_get_function_address_func1 (void)
{
	return (void*) func1;
}

#include <simple_header.h>

// Wraps call to function 'func2'
// For ve
int  ewg_function_func2 (int ewg_a, int ewg_b)
{
	return func2 ((int)ewg_a, (int)ewg_b);
}

// Return address of function 'func2'
void* ewg_get_function_address_func2 (void)
{
	return (void*) func2;
}

