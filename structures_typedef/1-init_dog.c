#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* init_dog - principal function.
* @d: pointer.
* @name: name pointer.
* @age: age pointer.
* @owner: owner pointer.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
