#include <stdio.h>

/**
*Main - alphabet
*
*Write a function that prints the alphabet, in lowercase, followed by a new line.
*
*Return: zero on success
*/

void print_alphabet(void);

int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet(void){
int k;
for(k=97; k<=122; k++){
putchar(k);
putchar('\n');
}
}