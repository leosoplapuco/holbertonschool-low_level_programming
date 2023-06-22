#include <stdio.h>
#include "limits.h"
#include "main.h"

/**
* print_sign - Identifying numbers.
* @n: Value of the number.
* Return: zero on success.
*/

int print_sign(char n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar (48);
		return (0);
	}
	else
	{
		_putchar (43);
		return (-1);
	}
	_putchar ('\n');
}
