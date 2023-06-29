#include <stdio.h>
#include "main.h"

/**
* _strlen_recursion - principal function;
* @s: value;
* Return: zero on success.
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
