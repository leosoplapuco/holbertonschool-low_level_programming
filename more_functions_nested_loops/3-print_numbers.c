#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
* print_numbers - printing numbers zero al nine.
* Return: zero on success.
*/

void print_numbers(void)
{
	int c;

	c = 47;

	while (c < 58)
	{
		c++;
		printf("%d", c);
	}
}
