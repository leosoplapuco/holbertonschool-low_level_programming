#include <stdio.h>
#include "main.h"

/**
*Main - alphabet
*
*Write a function that prints the alphabet, in lowercase, followed by a new line.
*
*Return: zero on success
*/

void print_alphabet(void){
	int k;
	for(k=97; k<=122; k++){
		_putchar(k);
	}
}
