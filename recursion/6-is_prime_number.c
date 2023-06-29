#include <stdio.h>
#include "main.h"

/**
*is_prime_number - principal function
*@n: value.
*divisor: divisor.
*Return: zero on success.
*/

int is_prime_number(int n)
{
	int divisor;

	if (n <= 1)
	{
		return (0);
	}

	divisor = 2;

	while (divisor * divisor <= n)
	{
        if (n % divisor == 0)
	{
		return (0);
        }
	divisor++;
	}
	return (1);
}
