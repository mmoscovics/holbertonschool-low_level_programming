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

	name1 = name;
	owner1 = owner;
	dog = malloc(sizeof(dog_t));
	if (dog)
	{
		for (count = 0; name[count] != '\0'; count++, length_name++)
			;
		name1 = malloc(sizeof(char) * length_name + 1);
		if (name1 == NULL)
		{
			free(dog);
			return (NULL);
		}
		for (count = 0; count <= length_name; count++)
			name1[count] = name[count];
		dog->name = name;
		dog->age = age;
		for (count = 0; owner[count] != '\0'; count++, length_owner++)
			;
		owner1 = malloc(sizeof(char) * length_owner + 1);
		if (owner1 == NULL)
		{
			free(name1);
			free(dog);
			return (NULL);
		}
		for (count = 0; count <= length_owner; count++)
			owner1[count] = owner[count];
		dog->owner = owner;
		return (dog);
	}
	return (NULL);
}
