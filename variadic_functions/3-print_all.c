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
    char *s;

    va_start(args, format);

    while (ptr && *ptr)
    {
        c = *ptr;
        ptr++;

        if (c == 'c')
        {
            printf("%c", va_arg(args, int));
        }
        else if (c == 'i')
        {
            printf("%d", va_arg(args, int));
        }
        else if (c == 'f')
        {
            printf("%f", va_arg(args, double));
        }
        else if (c == 's')
        {
            s = va_arg(args, char *);
            if (s == NULL)
            {
                printf("(nil)");
            }
            else
            {
                printf("%s", s);
            }
        }
    }

    printf("\n");

    va_end(args);
}
