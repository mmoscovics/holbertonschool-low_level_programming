#include "holberton.h"

/**
 * _strpbrk - tested function
 *@s: string
 *@accept: characters
 * Return: matching strings
 */
char *_strpbrk(char *s, char *accept)
{
	int pos2;

	pos2 = 0;
	while (*s != '\0')
	{
		while(accept[pos2] != '\0')
		{
			if (*s == accept[pos2])
			{
				return (s);
			}
			pos2++;
		}
		s++;
		pos2 = 0;
	}
	return (0);
}
