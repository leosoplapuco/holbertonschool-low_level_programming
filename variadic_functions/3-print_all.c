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
    int i;
    float f;
    char *s;

    va_start(args, format);

    while (ptr && *ptr)
    {
        c = *ptr;
        ptr++;

        if (*ptr)
        {
            switch (c)
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
                    if (s == NULL)
                    {
                        printf("(nil)");
                        break;
                    }
                    printf("%s", s);
                    break;
                default:
                    continue;
            }

            if (*(ptr))
            {
                printf(", ");
            }
        }
    }

    printf("\n");

    va_end(args);
}

