#include "holberton.h"

/**
 * _strchr - tested function
 *@s: string
 *@c: character of string
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
	}
	return (s + i);
}
