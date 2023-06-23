#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
* times_table - Tying numbers in rows and columns.
* a: column value.
* b: row value.
* Return: zero on success.
*/

void times_table(void)
{
	int a, b, out;

	for (a = 0; a <= 9; a++)
	{
		putchar(48);
		
		for (b = 1; b <= 9; b++)
		{
			out = a * b;

			putchar(44);
			putchar(32);
			
			if (out <= 9)
			{
				putchar(32);
				putchar(out + 48);
			}
			else
			{
				putchar((out / 10) + 48);
				putchar((out % 10) + 48);
			}
		}
		putchar('\n');
	}
}
