#include "holberton.h"

/**
 * _memset - tested function
 *@s: pointer to memory
 *@b: constant byte
 *@n: size of memory
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	*s = n;
	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}
