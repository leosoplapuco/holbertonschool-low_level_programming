#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

struct dog {
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner) {
    d->name = name;
    d->age = age;
    d->owner = owner;
}

int main(void) {
    struct dog my_dog;
    return 0;
}
