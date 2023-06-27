#include <stdio.h>
#include "main.h"

/**
* print_rev - principal function.
* @s: value.
* length: length.
* Return: zero on success
*/

void rev_string(char *s)
{
	int length = 0;
	int a = 0;
	char *b = s;
	int c = 0;
	int d;
	char e;

	while (*b != '\0')
	{
		b++;
		length++;
	}

	a = length - 1;

	for ( ; c < ((l / 2) + 1) ; c++)
	{
		d = (a - c);
		n = s[c];
		s[c] = s[d];
		s[d] = e;
	}
}
