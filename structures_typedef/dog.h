#include <stdio.h>
#include "main.h"
#ifndef HEADER_FILE
#define HEADER_FILE dog.h

/**
* struct dog - Define a new struct dog with name, age, owner
* @name: name of the dog
* @age: age of the dog
* @owner: owner of dog
* Return: zero on success.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
