#include <stdio.h>
#include "main.h"

/**
* main - principal function.
* FizzBuzz - function to change characteres.
* @num: value.
* Return: zero on success
*/

void FizzBuzz(int num)
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
}

int main(void)
{
	int num;

	num = 1;

	while (num <= 100)
	{
		FizzBuzz(num);

		if (num != 100)
		{
			printf(" ");
		}
		num++;
	}

	printf("\n");

	return (0);
}
