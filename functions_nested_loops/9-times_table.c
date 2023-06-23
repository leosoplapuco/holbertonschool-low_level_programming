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
	int a;
	int b;
	int out;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			out = a * b;

			if (out < 10)
			{
				if (b == 0)
				{
					prinft("%2d,", out);
				}
				else
				{
					print("  %2d,", out);
				}
			}
			else
			{
				printf("%3d,", out);
			}

		}
		printf("\n");
	}
}
