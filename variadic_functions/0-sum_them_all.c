#include <stdarg.h>
#include "main.h"

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
	return (sum);
}
