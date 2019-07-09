#include "holberton.h"

/**
 * _strchr - tested function
 *@s: string
 *@c: character of string
 * Return: string
 */
char *_strchr(char *s, char c)
{

	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
		return (s);
	return (0);
}
