#include <stdio.h>
#include "main.h"

/**
* prev_string - principal function.
* @s: value.
* length: length.
* Return: zero on success
*/

void rev_string(char *s)
{
	int length = 0;
	int l = 0;
	char *y = s;
	int e = 0;
	int x;
	char n;

	while (*y != '\0')
	{
		y++;
		length++;
	}

	l = length - 1;

	for ( ; e < ((l / 2) + 1) ; e++)
	{
		x = (l - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}
}
