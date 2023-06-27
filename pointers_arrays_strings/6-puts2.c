#include <stdio.h>
#include "main.h"

/**
* puts2 - principal function.
* @str: value.
* length: length.
* Return: zero on success
*/

void puts2(char *str)
{
	int length = 0;
	int a = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		length++;
	}

	a = length - 1;

	for (z = 0 ; z <= a ; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
