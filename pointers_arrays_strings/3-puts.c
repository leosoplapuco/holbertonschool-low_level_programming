#include <stdio.h>
#include "main.h"

/**
* _puts - principal function.
* @str: value.
* @a: second value.
* Return: zero on success
*/

void _puts(char *str)
{
	int a;

	a = 0;

	while (*(str + a) != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
