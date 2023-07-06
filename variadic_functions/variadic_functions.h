#ifndef VARFUNC
#define VARFUNC
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
/**
* struct typ - Struct operators
* @c: Char
* @tp: The function associated
*/

typedef struct typ
{
	char *c;
	void (*tp)(va_list var);
} typ_t;
#endif
