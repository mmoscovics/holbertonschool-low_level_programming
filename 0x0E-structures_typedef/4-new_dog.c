#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - pointer to dog
 *@name: name of new dog
 *@age: age of new dog
 *@owner: owner of new dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int count, length_name, length_owner;
	char *name1, *owner1;
	dog_t *dog;

	for (count = 0; name[count] != '\0'; count++, length_name++)
		;
	length_name++;
	name1 = malloc(sizeof(char) * length_name);
	if (name1 == NULL)
	{
		return (NULL);
	}
	for (count = 0; owner[count] != '\0'; count++, length_owner++)
		;
	length_owner++;
	owner1 = malloc(sizeof(char) * length_owner);
	if (owner1 == NULL)
	{
		free(name1);
		return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(name1);
		free(owner1);
		return (NULL);
	}
	for (count = 0; count < length_name; count++)
		name1[count] = name[count];
	for (count = 0; count < length_owner; count++)
		owner1[count] = owner[count];
	dog->name = name1;
	dog->age = age;
	dog->owner = owner1;
	return (dog);
}
