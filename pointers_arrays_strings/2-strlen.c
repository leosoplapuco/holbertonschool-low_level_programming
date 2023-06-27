#include <stdio.h>
#include "main.h"

/**
* _strlen - principal function.
* @s: value.
* length: length.
* Return: zero on success
*/

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
