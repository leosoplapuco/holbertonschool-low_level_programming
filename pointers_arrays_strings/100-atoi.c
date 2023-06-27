#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
* _atoi - principal function.
* @s: value.
*/

int _atoi(char *s)
{
	int sign;
	int result;
	int i;

	sign = 1;
	result = 0;
	i = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && (s[i] - '0') > (INT_MAX % 10)))
		{
			if (sign == 1)
			{
				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
		}
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return (sign * result);
}
