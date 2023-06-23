#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
* _isdigit - acknowledges if is Uppercase.
* @c: value
* Return: zero on success.
*/

int _isdigit(int c)
{
	if ((c > 31 || c < 48) && (c > 57 || c <= 126))
	{
		return (0);
	}
	else if (c >= 48 || c <= 57)
	{
		return (1);
	}
	else
	{
		return (1);
	}
}
