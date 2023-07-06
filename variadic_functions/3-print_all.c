#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - imprime una lista de argumentos con formato
 * @format: cadena de formato
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	char *sep = "";
	char c;
	int printed = 0;

	va_start(args, format);

	while (format && *ptr)
	{
		if (printed)
			printf("%s", sep);
		switch (*ptr)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				char *str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				ptr++;
				continue;
		}
		sep = ", ";
		printed = 1;
		ptr++;
	}

	printf("\n");

	va_end(args);
}

