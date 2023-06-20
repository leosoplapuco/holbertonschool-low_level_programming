#include <stdio.h>

/**
* main - Everybody less e and q
*
* Less e and q
*
* Return: zero on succes
*/
int main(void)
{
char character;
for (character = 'a'; character <= 'z'; character++)
{
if (character != 'e' && character != 'q')
putchar(character);
}
putchar('\n');
return (0);
}
