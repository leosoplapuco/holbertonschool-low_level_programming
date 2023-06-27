#include <stdio.h>
#include "main.h"

/**
* print_rev - principal function.
* @s: value.
* length: length.
* Return: zero on success
*/

void print_rev(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{}
	for (length = length - 1; length >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
