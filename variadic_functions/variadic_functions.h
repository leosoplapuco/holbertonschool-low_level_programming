#ifndef VARFUNC
#define VARFUNC
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
* struct typ - principal struct.
* @c: value.
* @tp: value
*/

typedef struct funckey
{
	void (*f)(va_list);
	char spec;
} funckey;

typedef struct typ
{
	char *c;
	void (*tp)(va_list var);
} typ_t;

#endif
