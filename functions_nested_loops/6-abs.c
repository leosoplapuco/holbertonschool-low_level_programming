#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
* _abs - Getting the absolute value.
* @num: Value of the number.
* Return: zero on success.
*/

int _abs(int num)
{
	if(num < 0)
	{
		num = num * -1;
		printf ("%d", num);
    	}else
    	{
		printf ("%d", num);
    	}
}
