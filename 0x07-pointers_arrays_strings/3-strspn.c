#include "holberton.h"

/**
 * _strspn - tested function
 *@s: base string
 *@accept: character string
 * Return: bytes in base string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, count, length;

	count = 0;
	for (length = 0; s[length] != '\0'; length++)
	{
		if (count != length)
			break;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[length] == accept[i])
			{
				count++;
			}
		}
	}
	return (count);
}
