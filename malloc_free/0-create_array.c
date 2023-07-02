#include <stdio.h>
#include <stdlib.h>

/**
*create_array - principal function.
*@size: first value.
*@c: second value.
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	a = 0;
	while (a < size)
	{
		str[a] = c;
		a++;
	}
	return (str);
}
