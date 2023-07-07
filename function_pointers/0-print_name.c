#include"stdlib.h"
#include "function_pointers.h"
#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	f(name);
}
