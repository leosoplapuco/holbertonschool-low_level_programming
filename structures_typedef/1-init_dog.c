#include <stdlib.h>
#include "main.h"

/**
* init_dog - principal function.
* @d: pointer of the elements.
* @name: name pointer.
* @age: age pointer.
* @owner: owner pointer.
* Return: zero on success.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
