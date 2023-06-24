#include <stdio.h>
#include "main.h"

/**
* main - filtring on c.
* i: value.
* Return: zero on success
*/

int main(void)
{
	int i;

	i = 0;
	
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i != 0)
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
