#include <stdarg.h>
#include "main.h"

int sum_them_all(const unsigned int n, ...) {
    if (n == 0)
        return 0;

    int sum = 0;
    unsigned int count = n;

    va_list args;
    va_start(args, n);

    while (count > 0) {
        int num = va_arg(args, int);
        sum += num;
        count--;
    }

    va_end(args);

    return sum;
}
