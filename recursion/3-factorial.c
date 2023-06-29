#include <stdio.h>
#include "main.h"

/**
* factorial - principal function.
* @n: value.
* Return: zero on success.
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return n * factorial(n - 1);
}
