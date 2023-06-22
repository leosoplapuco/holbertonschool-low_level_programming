#include <stdio.h>
#include "main.h"

/**
* Main - print_alphabet_x10
*
* Description: Function print_alphabet_x10 print the alphabeth ten times
*
* Return zero on success
*
*/

void print_alphabet_x10(void)
/**
 *
 * print_alphabet_x10 - The function print ten times
 *
 * */
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
