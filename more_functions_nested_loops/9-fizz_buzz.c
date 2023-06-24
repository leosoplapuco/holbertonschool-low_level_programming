#include <stdio.h>
#include "main.h"

/**
* main - principal function.
* num: value.
* Return: zero on success
*/

int main(void)
{
	int num;

	num = 1;

	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}

		if (num != 100)
		{
			printf(" ");
		}
		num++;
	}
	printf("\n");
	return (0);
}
