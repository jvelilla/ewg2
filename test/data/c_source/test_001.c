

void foo (void (*bar)(void))
{
}

#ifdef GOBO_OS_WINDOWS
void foo2 (void (__stdcall *bar2)(void))
{
}
#endif
