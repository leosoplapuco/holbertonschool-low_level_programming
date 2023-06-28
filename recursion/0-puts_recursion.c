#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Principal function.
 * @s: value;
 * Return: zero on success.
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
