#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - principal function.
* @separator: space.
* @n: initial value
* Return: zero on success.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	if (n > 0)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		} i = 1;
		while (i < n)
		{
			str = va_arg(args, char *);

			if (separator != NULL)
			{
				printf("%s", separator);
			}
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			} i++;
			if (i == n)
			{
				break;
			}
		}
	}
	va_end(args);
	printf("\n");
}
