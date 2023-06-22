#include <stdio.h>
#include "main.h"

/**
*_isalpha - Script than print the values one or zero
*
*c: value
*
* Return: zero on success.
*/

int _isalpha(char c)
{
	if (65 <= c <= 90 || 97 <= c <= 122)
	{
		return (1);
	}
	return (0);
}
