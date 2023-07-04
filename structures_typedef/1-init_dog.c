#include <stdio.h>
#include "main.h"

/**
*init_dog - function to add information about our pet.
*@d: pointer.
*@name: name.
*@age: age.
*@owner: owner.
*Return: zero on success.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
