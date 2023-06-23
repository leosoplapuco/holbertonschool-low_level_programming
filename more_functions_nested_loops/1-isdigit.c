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
	if(c > 0 || c <= 9)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
