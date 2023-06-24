#include <stdio.h>
#include "main.h"

/**
* print_line - drawing on c.
* @n: times that repeat the line.
* Return: zero on success
*/

Write a function that draws a straight line in the terminal.

void print_line(int n)
{
	if (n <= 0) {
		putchar('\n');
		return;
	}
	for (int line = 0; line < n; line++)
	{
		putchar('_');
	}

	putchar('\n');
}
