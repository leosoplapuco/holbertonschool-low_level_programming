#include <stdio.h>
#include <limits.h>
#include "main.h"
#include <stdbool.h>

/**
* _atoi - principal function.
* @s: value.
* Return: zero on success.
*/

int _atoi(char *s)
{
	int result;
	int sign;
	bool number_found;

	result = 0;
	sign = 1;
	number_found = false;

	while (*s != '\0')
	{
		if (*s == '-' || *s == '+')
		{
			sign = (*s == '-') ? -1 : 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = (result * 10) + (*s - '0');
			number_found = true;
		}
		else
		{
			if (number_found)
			{
				break;
			}
		}
		s++;
	}
	return (sign * result);
}
