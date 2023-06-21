#include <stdio.h>

/**
*main - alphabet
*
*Write a function that prints the alphabet, in lowercase, followed by a new line.
*
*Return: zero on success
*/

int main(void)
{
int k;
for(k=97; k<=122; k++){
	putchar(k);
	putchar('\n');
}
return (0);
}
