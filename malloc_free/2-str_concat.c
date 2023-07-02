#include <stdio.h>
#include <stdlib.h>

/**
* *str_concat - principal function.
*@s1: first value.
*@s2: second value.
*Return: zero con success.
**/

char *str_concat(char *s1, char *s2)
{
	char *strDup;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	strDup = malloc(sizeof(char) * (a + b + 1));
	if (strDup == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		strDup[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		strDup[b] = s2[b];
		a++, b++;
	}
	strDup[a] = '\0';
	return (strDup);
}
