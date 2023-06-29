#include <stdio.h>
#include "main.h"

/**
*is_prime_number - principal function
*@n: value.
*divisor: divisor.
*Return: zero on success.
*/

#include <stdio.h>

int is_divisible(int n, int divisor) {
    // Caso base: Si el divisor alcanza la raíz cuadrada de n, n no es divisible por ningún número y es primo
    if (divisor * divisor > n) {
        return 0;
    }

    // Si n es divisible por el divisor actual, n no es primo
    if (n % divisor == 0) {
        return 1;
    }

    // Llamada recursiva incrementando el divisor en 1
    return is_divisible(n, divisor + 1);
}

int is_prime_number(int n) {
    // Casos especiales: 0, 1 y números negativos no son primos
    if (n <= 1) {
        return 0;
    }

    // Llamada a la función auxiliar para verificar la divisibilidad
    return is_divisible(n, 2);
}

int main() {
    int num = 17;

    if (is_prime_number(num)) {
        printf("%d es un número primo.\n", num);
    } else {
        printf("%d no es un número primo.\n", num);
    }

    return 0;
}

