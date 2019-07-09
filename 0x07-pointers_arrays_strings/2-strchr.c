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
	char *pos = '\0';

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			pos = &s[i];
			return (pos);
		}
	}
	if (s[i] != c)
		return ('\0');
	else
	{
		pos = &s[i];
		return (pos);
	}
}
