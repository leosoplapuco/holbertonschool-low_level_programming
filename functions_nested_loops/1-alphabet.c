#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Script than print the alphabet
 * k: initial value 
 * k: maximum value
 *
 * Return: zero on success.
 */

void print_alphabet(void)

{
	int num;

	for(num = 97; num <= 122; num++)
	
	{
		putchar (num);
	}

	putchar('\n');
}

