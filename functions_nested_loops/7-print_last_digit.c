#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
* print_last_digit - Getting the last digit of a number.
* @num: Value of the number.
* Return: zero on success.
*/

int print_last_digit(int num)
{
	if (num <= 0)
	{
		num = -num;
	}

	return (num);

	answer = num % 10;

	return (answer);
}
