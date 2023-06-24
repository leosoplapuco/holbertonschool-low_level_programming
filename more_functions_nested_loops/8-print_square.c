#include <stdio.h>
#include "main.h"

/**
* print_square - drawing on c.
* @size: times that repeat the #.
* Return: zero on success
*/

void print_square(int size)
{
	int row;
	int column;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	row = 0;
	while (row < size)
	{
		column = 0;
		while (column < size)
		{
			_putchar('#');
			column++;
		}
		_putchar('\n');
		row++;
	}
}
