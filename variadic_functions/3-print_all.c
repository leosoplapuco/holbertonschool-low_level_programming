#include <stdarg.h>
#include <stdio.h>

/**
* print_all - principal function.
* @format: initial value.
* Return: zero on success.
*/

#include <stdarg.h>
#include <stdio.h>

void print_char(va_list args)
{
    char c = va_arg(args, int);
    printf("%c", c);
}

void print_int(va_list args)
{
    int intValue = va_arg(args, int);
    printf("%d", intValue);
}

void print_float(va_list args)
{
    double floatValue = va_arg(args, double);
    printf("%f", floatValue);
}

void print_string(va_list args)
{
    char *stringValue = va_arg(args, char *);
    if (stringValue == NULL)
    {
        printf("(nil)");
    }
    else
    {
        printf("%s", stringValue);
    }
}

void print_all(const char * const format, ...)
{
    va_list args;
    const char *ptr = format;
    char c;

    va_start(args, format);

    while (ptr && *ptr)
    {
        c = *ptr;
        ptr++;

        if (c == 'c')
        {
            print_char(args);
        }
        else if (c == 'i')
        {
            print_int(args);
        }
        else if (c == 'f')
        {
            print_float(args);
        }
        else if (c == 's')
        {
            print_string(args);
        }
    }

    printf("\n");

    va_end(args);
}

