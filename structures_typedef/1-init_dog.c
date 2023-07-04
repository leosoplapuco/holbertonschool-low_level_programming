#include <stdio.h>

struct dog{
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner){
    d->name = strdup(name);
    d->age = age;
    d->owner = strdup(owner);
}
