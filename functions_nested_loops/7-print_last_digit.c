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
	num = num % 10;
	printf ("%d\n", num);
	return (0);
}
