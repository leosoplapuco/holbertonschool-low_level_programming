#include <stdio.h>
#include "main.h"

/**
*print_array - Principal function.
*@a: first value.
*@n: seconf value.
*@c: third value.
*Return: zero on succes.
*/

void print_array(int *a, int n)
{
	int c;

	for (c = 0 ; c < n; c++)
	{
		printf("%d", a[c]);
		if (c != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
