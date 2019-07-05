#include "holberton.h"

/**
 * _strncat - tested function
 *@dest: destination variable
 *@src: source variable
 *@n: length variable
 * Return: return destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	for (length = 0 ; *(dest + length) != '\0' ; length++)
		;
	for (i = 0 ; i < n && *(src + i) != '\0' ; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
