#include <stdio.h>
#include "main.h"

/**
* main - filtring on c.
* i: value.
* Return: zero on success
*/

void fizzBuzz() {
    int i = 1;
    while (i <= 100) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz ");
        } else if (i % 3 == 0) {
            printf("Fizz ");
        } else if (i % 5 == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
}
