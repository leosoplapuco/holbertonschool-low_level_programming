#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
* jack_bauer - prints all minutes of the day with Jack Bauer
* Return: zero on success.
*/

void jack_bauer(void)
{
	int h;
	int m;
	
	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			printf("%.2d:%.2d\n", h, m);
		}

	}
}
