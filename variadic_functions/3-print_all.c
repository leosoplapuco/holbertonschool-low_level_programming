#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    va_list args;
    const char *ptr = format;
    char c;
    int i;
    float f;
    char *s;
    int count = 0;

    va_start(args, format);

    while (*ptr)
    {
        if (count > 0)
            printf(", ");

        switch (*ptr)
        {
            case 'c':
                c = va_arg(args, int);
                printf("%c", c);
                break;
            case 'i':
                i = va_arg(args, int);
                printf("%d", i);
                break;
            case 'f':
                f = va_arg(args, double);
                printf("%f", f);
                break;
            case 's':
                s = va_arg(args, char *);
                printf("%s", (s == NULL) ? "(nil)" : s);
                break;
            default:
                break;
        }

        count++;
        ptr++;
    }

    printf("\n");

    va_end(args);
}

