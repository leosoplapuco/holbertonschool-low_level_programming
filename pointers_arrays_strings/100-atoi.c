#include <stdio.h>
#include <limits.h>
#include "main.h"
#include <stdbool.h>

/**
* _atoi - principal function.
* @s: value.
*/

int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    bool number_found = false;


    while (*s != '\0') {
        if (*s == '-' || *s == '+') {
            sign = (*s == '-') ? -1 : 1;
        } else if (*s >= '0' && *s <= '9') {
            result = (result * 10) + (*s - '0');
            number_found = true;
        } else {
            if (number_found) {
                break;
            }
        }

        s++;
    }

    return (sign * result);
}
