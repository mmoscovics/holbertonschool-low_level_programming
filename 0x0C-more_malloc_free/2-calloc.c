#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - tested function, allocates memory for an array
 *@nmemb: memory size in n
 *@size: size of array
 * Return: NULL if fail or nmemb or size is 0, or returns a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int count, length;
	char *point;

	if (nmemb == 0 || size == 0)
		return (NULL);
	length = nmemb * size;

	point = malloc(length);
	if (point)
	{
		for (count = 0; count < length; count++)
			*point++ = 0;
	}
	return (point);
}
