#include <stdio.h>
#include "main.h"

/**
* print_diagonal - drawing on c.
* @n: times that repeat the line.
* Return: zero on success
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	
	int i = 0;
	
	while (i < n)
	{
		int j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
    }
}
