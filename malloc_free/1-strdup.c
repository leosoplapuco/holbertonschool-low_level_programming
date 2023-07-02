#include "holberton.h"
#include <stdlib.h>

/**
* *_strdup - principal function.
*@str: string to copy
* *strDup - value.
*Return: zero on success.
*/

char *_strdup(char *str)
{
	char *strDup;
	int a, b;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	a++;
	strDup = malloc(sizeof(*str) * a);
	if (strDup == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
	{
		strDup[b] = str[b];
		b++;
	}
	return (strDup);
}
