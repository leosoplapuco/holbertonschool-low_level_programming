#include <stdio.h>
#include "main.h"

/**
*is_prime_number - principal function
*@n: value.
*divisor: divisor.
*Return: zero on success.
*/

int is_divisible(int n, int divisor) {
    if (n == 2) {
        return 1;
    }

    if (n % divisor == 0) {
        return 0;
    }

    if (divisor * divisor > n) {
        return 1;
    }

    return is_divisible(n, divisor + 1);
}

int is_prime_number(int n) {
    if (n <= 1) {
        return 0;
    }

    return is_divisible(n, 2);
}
