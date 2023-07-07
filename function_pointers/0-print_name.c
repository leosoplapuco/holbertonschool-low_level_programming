#include"stdlib.h"
#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - principal function.
* @name: char.
* @f: value.
* Return: zero on succes.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	f(name);
}
