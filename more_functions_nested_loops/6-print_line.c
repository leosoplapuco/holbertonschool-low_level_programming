#include <stdio.h>
#include "main.h"

/**
* print_line - drawing on c.
* @n: times that repeat the line.
* Return: zero on success
*/

void print_line(int n)
{
	int lines;
	
	while (lines < n) {
		if (n <= 0)
		{
			putchar('\n');
			return;
		}
		else
		{
			putchar('_');
		}
		lines++;
	}

	putchar('\n');
}
