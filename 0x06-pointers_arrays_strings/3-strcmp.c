#include "holberton.h"

/**
 * _strcmp - tested function
 *@s1: string 1
 *@s2: string 2
 * Return: difference between strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
