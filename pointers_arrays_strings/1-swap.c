#include <stdio.h>
#include "main.h"

/**
* swap_int - principal function.
* @a: first value.
* @b: second value
* Return: zero on success
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
