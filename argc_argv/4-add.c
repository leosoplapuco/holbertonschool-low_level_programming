#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - principal function.
*@argc: count.
*@argv: array.
*sum - value.
*Return: zero on success.
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		char *num = argv[i];
		int j = 0;

		while (num[j] != '\0')
		{
			if (!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(num);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
