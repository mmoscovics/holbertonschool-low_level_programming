#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - tested function, concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: poisition
 * Return: NULL on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2, count;
	char *cat;

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = malloc(sizeof(char));
		s2 = "";
	}
	for (length1 = 0; s1[length1] != '\0'; length1++)
		;
	for (length2 = 0; s2[length2] != '\0'; length2++)
		;
	if (n >= length2)
		n = length2;
	cat = malloc(sizeof(char) * ((length1) + n + 1));
	if (cat)
	{
		for (count = 0; count <= length1; count++)
			cat[count] = s1[count];
		for (count = 0; count < n; count++)
			cat[length1 + count] = s2[count];
		return (cat);
	}
	return (NULL);
}
