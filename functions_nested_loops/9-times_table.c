#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
* times_table - Tying numbers in rows and columns.
* @a: column.
* @b: row.
* Return: zero on success.
*/

void times_table(void)
{
    int a;
    int b;

    for (a = 0; a <= 9; a++)
    {
	    for (b = 0; b <= 9; b++)
	    {
		    printf("%2d ", a * b);
	    }
	    printf("\n");
    }
}
