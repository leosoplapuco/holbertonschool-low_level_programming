#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - principal function.
* @separator: space.
* @n: initial value
* Return: zero on success
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    va_start(args, n);

    if (n > 0)
    {
        char *str = va_arg(args, char *);

        if (str == NULL)
        {
            printf("(nil)");
        }
        else
        {
            printf("%s", str);
        }

        unsigned int i = 1;
        while (i < n)
        {
            str = va_arg(args, char *);

            if (separator != NULL)
            {
                printf("%s", separator);
            }

            if (str == NULL)
            {
                printf("(nil)");
            }
            else
            {
                printf("%s", str);
            }

            i++;
        }
    }

    va_end(args);

    printf("\n");
}
