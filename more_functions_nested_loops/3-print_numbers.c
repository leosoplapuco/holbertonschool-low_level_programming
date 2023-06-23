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
	c = 0;

	while(c < 10)
	{
		c++;
		printf("%d\n", c);
	}
}
