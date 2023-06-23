#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
* add - This function will receive two numbers to plus..
* n: given number.
* Return: zero on success.
*/

void print_to_98(int n)
{
	if (98 < n)
	{
		for (n ; 98 < n; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (n ; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
