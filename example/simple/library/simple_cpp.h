#line 1 "C:\\home\\test\\ewg/example/simple/library/manual_wrapper/c/include/simple_header.h"



struct foo
{
  int a,b,*pc;
};

typedef union
{
  int a;
} foo1;

typedef enum
{
  red,
  blue,
  green
} colors;

void func1 (int a, int b);

int func2 (int a, int b);

#line 26 "C:\\home\\test\\ewg/example/simple/library/manual_wrapper/c/include/simple_header.h"
