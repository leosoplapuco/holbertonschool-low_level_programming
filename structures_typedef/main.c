#include <stdio.h>
#include "main.h"

/**
* main - function to the checker.
* Return: zero on success.
*/

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("asdf", 3.5, "Jay");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
