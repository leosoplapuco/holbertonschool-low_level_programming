#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - I can not sleep game
 *
 *return: zero on success
 *
 * */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
	
char c;

for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}
