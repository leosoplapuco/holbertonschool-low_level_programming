#include <stdio.h>

/**
* main - zero to ten
*
* Starting on zero
*
* Return: zero on success
*/

int main(void)
{
int num;
for (num = 0; num < 10; num++)
putchar(num + '0');
putchar('\n');
return (0);
}
