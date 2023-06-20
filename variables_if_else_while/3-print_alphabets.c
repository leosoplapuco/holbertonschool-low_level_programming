#include <stdio.h>

/**
 * main - Now in upercase
 *
 * the alphabet
 *
 * Return: zero on success
 */
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
