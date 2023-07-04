#include <stdio.h>
#ifndef main_h
#define main_h
#include "main.h"

/**
* struct dog - adding information about our pet.
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

#endif
