#include <stdio.h>
#include "main.h"

/**
* function - principal function..
* @start: value zero.
* @end: value one.
* @m: value three;
* mid: mid.
* Return: Zero on success.
*/

int function(int start, int end, int m)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == m)
			return (mid);
		if (mid * mid > m)
			return (function(start, mid - 1, m));
		if (mid * mid < m)
			return (function(mid + 1, end, m));
	}
	return (-1);
}

/**
* _sqrt_recursion - principal function.
* @n: value.
* Return: zero on success.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (function(2, n, n));
}
