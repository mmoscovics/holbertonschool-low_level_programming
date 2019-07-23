#ifndef DOG_H
#define DOG_H

int _putchar(char c);

/**
 * struct dog - structure containing variables
 *@name: name of dog
 *@age: age of dog
 *@owner: name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
