#include <stdio.h>
#include "main.h"

/**
* print_triangle - drawing on c.
* @size: size to draw the triangle.
* @i: value.
* @j: value.
* Return: zero on success
*/

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
