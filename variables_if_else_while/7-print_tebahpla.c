#include <stdio.h>

/**
* main - Now in reverse
*
* Script than type the alphabet in reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);
putchar('\n');
return (0);
}
