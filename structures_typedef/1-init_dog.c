#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

struct dog {
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

int main(void) {
    struct dog my_dog;
}

void init_dog(struct dog *d, char *name, float age, char *owner) {
    d->name = strdup(name);
    d->age = age;
    d->owner = strdup(owner);
}

