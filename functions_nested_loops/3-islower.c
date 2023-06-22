#include <stdio.h>
#include "main.h"

/**
* _islower - return one if the letter is lower..
* c - variable
* Return: zero on success
*/

int _islower(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
