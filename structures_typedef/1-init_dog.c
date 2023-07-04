#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dog {
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

int main(void) {
    struct dog my_dog;

    init_dog(&my_dog, "Ghost", 4.75, "Jon Snow");
    printf("My name is %s, and I am %.2f years old - Woof!\n", my_dog.name, my_dog.age);

    // Liberar la memoria asignada
    free(my_dog.name);
    free(my_dog.owner);

    return 0;
}

void init_dog(struct dog *d, char *name, float age, char *owner) {
    d->name = strdup(name);
    d->age = age;
    d->owner = strdup(owner);
}

