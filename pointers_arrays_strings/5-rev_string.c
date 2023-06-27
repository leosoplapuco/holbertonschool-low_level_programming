#include <stdio.h>
#include "main.h"

/**
* print_rev - principal function.
* @s: value.
* length: length.
* Return: zero on success
*/

void rev_string(char *s) {
    int length = 0;
    char *start = s;
    char *end = s;

    while (*end != '\0') {
        length++;
        end++;
    }

    end--;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char str[] = "Hola, mundo!";
    printf("Cadena original: %s\n", str);
    rev_string(str);
    printf("Cadena invertida: %s\n", str);

    return 0;
}

