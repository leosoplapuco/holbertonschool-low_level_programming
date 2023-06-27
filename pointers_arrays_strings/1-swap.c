#include <stdio.h>
#include "main.h"

/**
* swap_int - principal function.
* @a: first value.
* @b: second value
* Return: zero on success
*/

void swap_int(int *a, int *b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int main()
{
	int a;
	int b;

	printf("a = %d, b = %d\n", a, b);
	swap_int(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	return (0);
}
