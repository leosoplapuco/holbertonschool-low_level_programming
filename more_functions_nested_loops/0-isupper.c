#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
* _isupper - acknowledges if is Uppercase.
* @c: value
* Return: zero on success.
*/

int _isupper(int c)
{
	if (c < 65 || c > 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
