#include <stdio.h>
#include "main.h"

/**
* print_line - drawing on c.
* @n: times that repeat the line.
* Return: zero on success
*/

void print_line(int n)
{
	if (n <= 0) {
		_putchar('\n');
		return;
	}
	for (int line = 0; line < n; line++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
