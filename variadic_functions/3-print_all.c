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
        char type = *ptr;

        while (type != 'c' && type != 'i' && type != 'f' && type != 's')
        {
            ptr++;
            type = *ptr;
        }

        switch (type)
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                if (has_comma)
                    printf(", ");
                printf("%d", va_arg(args, int));
                has_comma = 1;
                break;
            case 'f':
                if (has_comma)
                    printf(", ");
                printf("%f", va_arg(args, double));
                has_comma = 1;
                break;
            case 's':
                if (has_comma)
                    printf(", ");
                s = va_arg(args, char *);
                printf("%s", (s != NULL) ? s : "(nil)");
                has_comma = 1;
                break;
        }

        ptr++;
    }

    printf("\n");

    va_end(args);
}

