#include<stdio.h>
#include "main.h"

/**
* *_strcpy - principal function.
*@dest: first evaluate.
*@src: second value.
*a: third value.
*b: four value.
*Return: zero on success.
*/

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
