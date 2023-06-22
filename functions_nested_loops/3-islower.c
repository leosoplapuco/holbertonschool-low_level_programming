#include <stdio.h>
#include "main.h"

/**
*_islower(int c) - Script than print the values one or zero
*
*num: value
*
* Return: zero on success.
*/

int _islower(char c)
{	
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
	
	}
}
