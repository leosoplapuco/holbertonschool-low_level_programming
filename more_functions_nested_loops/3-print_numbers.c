#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
* print_numbers - printing numbers zero al nine.
* Return: zero on success.
*/

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}

	_putchar('\n');
}
