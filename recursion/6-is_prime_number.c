#include <stdio.h>
#include "main.h"

/**
*is_prime_number - principal function
*@n: value-
*Return: zero on success.
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return 0;
	}
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
