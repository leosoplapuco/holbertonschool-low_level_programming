#include <stdio.h>
#include "main.h"

/**
*puts_half - Principal function.
*@str: value.
*Return: zero on succes.
*/

void puts_half(char *str)
{
	int length = 0;
	char *a = str;
	int b;

	while (*a != '\0')
	{
		a++;
		length++;
	}
	if (length % 2 == 0)
	{
		b = length / 2;
	}
	else
	{
		b = (length + 1) / 2;
	}
	for ( ; b < length ; b++)
	{
		_putchar(str[b]);
	}

	_putchar('\n');
}
