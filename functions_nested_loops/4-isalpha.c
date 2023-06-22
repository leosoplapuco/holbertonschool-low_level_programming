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
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
