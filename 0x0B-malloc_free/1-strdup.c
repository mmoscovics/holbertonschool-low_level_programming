#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - tested function, returns pointer to copy of string given parameter
 *@str: base string
 * Return: NULL if string is NULL, or duplicate
 */
char *_strdup(char *str)
{
	char *dup;
	int length, count;

	for (length = 0; str[length] != '\0'; length++)
		;
	if (str == NULL)
		return (NULL);
	dup = malloc(sizeof(char) * length + 1);
	if (dup)
	{
		for (count = 0; str[count] != '\0'; count++)
			dup[count] = str[count];
		return (dup);
	}
	return (NULL);
}
