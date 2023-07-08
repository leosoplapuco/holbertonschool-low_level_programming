#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    va_list args;
    const char *ptr = format;
    char *s;
    int has_comma = 0;

    va_start(args, format);

    while (*ptr)
    {
        if (has_comma)
            printf(", ");

        has_comma = 1;

        switch (*ptr)
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                s = va_arg(args, char *);
                printf("%s", (s == NULL) ? "(nil)" : s);
                break;
            default:
                has_comma = 0;
                break;
        }

        ptr++;
    }

    printf("\n");

    va_end(args);
}
