#include <stdarg.h>
#include <stdio.h>

/**
* print_all - principal function.
* @format: initial value.
* Return: zero on success.
*/

void print_all(const char * const format, ...)
{
    va_list args;
    const char *ptr = format;
    char c;
    int intValue;
    float floatValue;
    char *stringValue;

    va_start(args, format);

    while (ptr && *ptr)
    {
        c = *ptr;
        ptr++;

        if (c == 'c')
        {
            intValue = va_arg(args, int);
            printf("%c", (char)intValue);
        }
        else if (c == 'i')
        {
            intValue = va_arg(args, int);
            printf("%d", intValue);
        }
        else if (c == 'f')
        {
            floatValue = va_arg(args, double);
            printf("%f", floatValue);
        }
        else if (c == 's')
        {
            stringValue = va_arg(args, char *);
            if (stringValue == NULL)
            {
                printf("(nil)");
            }
            else
            {
                printf("%s", stringValue);
            }
        }
    }

    printf("\n");

    va_end(args);
}
