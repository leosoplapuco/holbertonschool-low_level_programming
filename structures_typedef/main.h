int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);

int main(void)
{
    struct dog my_dog;
    init_dog(&my_dog, "Bruno", 3.5, "Bob");
    printf("My name is %s, and I am %.1f years old - Woof!\n", my_dog.name, my_dog.age);

    return (0);
}
