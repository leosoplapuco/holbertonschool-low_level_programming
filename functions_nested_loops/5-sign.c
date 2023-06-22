#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
*
*print_singn - identifying numbers
*
*n: value of the number
*
*Return: zero on success.
*/

int print_sign(int n)
{
	if (n == 48)
	{
		putchar('0');
		return(0);
	}
	else if (n > 0)
	{
		putchar('+');
		return(1);
	}
	else
	{
		putchar('-');
		return(-1);
	}
}
