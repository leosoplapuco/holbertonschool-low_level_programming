#include <stdlib.h>
#include <time.h>
/**
 * main - Conditionals with c
 *
 *Learnign conditionals in c
 *
 * Return: zero on success
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n == 0)
printf("%d es cero\n", n);
else if (n < 0)
	printf("%d es negativo\n", n);
else
	printf("%d es positivo\n", n);
return (0);
}
