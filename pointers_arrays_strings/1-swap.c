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
	int x;
	int y;

	printf("Antes del intercambio: x = %d, y = %d\n", x, y);
	swap_int(&x, &y);
	printf("Después del intercambio: x = %d, y = %d\n", x, y);

	return (0);
}
