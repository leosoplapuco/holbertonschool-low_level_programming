#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    va_list args;
    const char *ptr = format;
    char *s;
    int has_comma = 0;
    int index = 0;

    va_start(args, format);

    while (*ptr)
    {
        has_comma = format[index + 1] != '\0' ? 1 : 0;

        switch (*ptr)
        {
            case 'c':
                putchar(va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                s = va_arg(args, char *);
                printf("%s", s ? s : "(nil)");
                break;
        }

        ptr++;
        index++;
    }

    printf("\n");

    va_end(args);
}
