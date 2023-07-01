#include <stdio.h>

/**
*main - principal function.
*@argc: count.
*@argv: array.
*Return: zero on success
*/

int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
