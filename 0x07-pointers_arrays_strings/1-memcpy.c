#include "holberton.h"

/**
 * _memcpy - tested function
 *@dest: destination of memory copy
 *@src: src for memory copy
 *@n: number of bytes for memory
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
