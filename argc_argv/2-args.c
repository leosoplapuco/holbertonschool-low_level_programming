#include <stdio.h>

/**
*main - Principal function.
*@argc: count.
*@argv: array.
*Return: zero on succes.
**/

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
