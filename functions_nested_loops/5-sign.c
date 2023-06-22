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

int print_sign(char n)
{
	if (n == 0)
	{
		putchar(48);
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
