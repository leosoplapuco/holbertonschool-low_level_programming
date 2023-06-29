#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Principal function.
 * @x: first value.
 * @y: second value.
 * Return: zero on success.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
