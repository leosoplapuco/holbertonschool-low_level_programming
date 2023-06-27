#include <stdio.h>
#include "main.h"

/**
* swap_int - principal function.
* @a: first value.
* @b: second value
* Return: zero on success
*/

void swap_int(int *a, int *b){
	int *c;
	int *d;

	c = &a;
	d = &b;

	printf("%d\n", a, b);
	printf("%d\n", c, d);

	return (0);
}
