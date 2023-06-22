#include <stdio.h>
#include "main.h"

/**
*
*print_singn - identifing numbers
*
*n: value of the number
*
* Return: zero on success.
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
		putchar(43);
		return(1);
	}
	else
	{
		putchar(45);
		return(-1);
	}
}
