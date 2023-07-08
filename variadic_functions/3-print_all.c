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

    va_start(args, format);

    while (format && *ptr)
    {
        if (*(ptr + 1) != '\0')
        {
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
                    if (s == NULL)
                        s = "(nil)";
                    printf("%s", s);
                    break;
                default:
                    break;
            }
            if (*(ptr + 2) != '\0')
                printf(", ");
        }
        ptr++;
    }
    printf("\n");

    va_end(args);
}

