#include <stdio.h>
#include "main.h"

/**
* print_triangle - drawing on c.
* @size: size to draw the triangle.
* a: value to column.
* b: value to rowe.
* c: spaces.
* Return: zero on success
*/

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (c = 1; c <= size - a; c++)
			{
			printf(" ");
			}
			for (b = 1; b <= a; b++)
			{
				printf("#");
			}
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
