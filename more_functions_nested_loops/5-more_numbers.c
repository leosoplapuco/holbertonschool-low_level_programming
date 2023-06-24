#include <stdio.h>
#include "main.h"

/**
* more_numbers - printing more numbers but ten times.
* num: value.
* time: times.
* Return: zero on success
*/

void more_numbers(void)
{
	int times;
	int num;

	for (times = 0; times < 10; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}

		_putchar('\n');
	}
}
