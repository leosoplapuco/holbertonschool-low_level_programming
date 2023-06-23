#include <stdio.h>
#include "main.h"

/**
* print_most_numbers - printing more numbers but less two and four.
* num: value.
* Return: zero on success
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar (num + '0');
		}
	}

	_putchar('\n');
}
