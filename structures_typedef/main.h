#ifndef MAIN_H
#define MAIN_H

dog_t *new_dog(char *name, float age, char *owner);

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
