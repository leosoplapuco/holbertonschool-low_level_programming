#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Script than print the alphabet
 * k: initial value 
 * k: maximum value
 *
 * Return: zero on success.
 */
void print_alphabet(void);

int main(void) {
    print_alphabet();
    return 0;
}

void print_alphabet(void)
{
	int k;

	for(k=97; k<=122; k++)
        {
		putchar(k);
        }
        putchar('\n');
}

