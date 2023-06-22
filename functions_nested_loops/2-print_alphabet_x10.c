#include <stdio.h>
#include "main.h"

/**
*main - ten times alphabet
*
*num: initial value
*
*print_alphabet_x10: function than type the alphabet ten times
*
*i:times to repeat
*
* Return: zero on success.
*/

void print_alphabet_x10(void)
{
	int num;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (num = 97; num <= 122; num++)
		{
			putchar (num);
		}
		putchar ('\n');
	}
}
