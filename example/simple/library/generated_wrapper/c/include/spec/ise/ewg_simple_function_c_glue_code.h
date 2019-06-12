
// Wraps call to function 'func1' in a macro
#include <simple_header.h>

#define ewg_function_macro_func1(ewg_param_a, ewg_param_b) func1 ((int)ewg_param_a, (int)ewg_param_b)

void  ewg_function_func1 (int a, int b);
// Wraps call to function 'func2' in a macro
#include <simple_header.h>

#define ewg_function_macro_func2(ewg_param_a, ewg_param_b) func2 ((int)ewg_param_a, (int)ewg_param_b)

int  ewg_function_func2 (int a, int b);
