#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
* print_last_digit - Getting the last digit of a number.
* @num: Value of the number.
* Return: zero on success.
*/

int print_last_digit(int num)
{
	int last;

	last = num % 10;

	if (last < 0)
	{
		_putchar (-last + 48);
		return (-last);
	}
	else
	{
		_putchar (last + 48);
		return (last);
	}
}
