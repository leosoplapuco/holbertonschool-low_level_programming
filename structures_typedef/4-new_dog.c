#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name;
    float age;
    char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner) {
    dog_t *new_dog;

    if (name == NULL || owner == NULL)
        return NULL;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    new_dog->name = malloc(strlen(name) + 1);
    if (new_dog->name == NULL) {
        free(new_dog);
        return NULL;
    }

    new_dog->owner = malloc(strlen(owner) + 1);
    if (new_dog->owner == NULL) {
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }

    strcpy(new_dog->name, name);
    strcpy(new_dog->owner, owner);
    new_dog->age = age;

    return new_dog;
}

int main(void) {
    char *name = "Buddy";
    float age = 3.5;
    char *owner = "John";

    dog_t *my_dog = new_dog(name, age, owner);
    if (my_dog == NULL) {
        printf("Failed to create a new dog.\n");
        return 1;
    }

    printf("New dog created:\n");
    printf("Name: %s\n", my_dog->name);
    printf("Age: %.1f\n", my_dog->age);
    printf("Owner: %s\n", my_dog->owner);

    free(my_dog->name);
    free(my_dog->owner);
    free(my_dog);

    return 0;
}

