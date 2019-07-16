#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - tested function, concatenates two strings
 *@s1: string 1
 *@s2: string 2
 * Return: NULL on fail
 */
char *str_concat(char *s1, char *s2)
{
	int length1, length2, count;
	char *cat;

	if (s1 == NULL)
	{
		s1 = '\0';
		lenght1 = malloc(sizeof(char));
	}
	if (s2 == NULL)
	{
		s2 = '\0';
		length2 = malloc(sizeof(char));
	}
	for (length1 = 0; s1[length1] != '\0'; length1++)
		;
	for (length2 = 0; s2[length2] != '\0'; length2++)
		;
	cat = malloc(sizeof(char) * ((length1) + (length2 + 1)));
	if (cat)
	{
		for (count = 0; count <= length1; count++)
			cat[count] = s1[count];
		for (count = 0; count <= length2; count++)
			cat[length1 + count] = s2[count];
		return (cat);
	}
	return (NULL);
}
