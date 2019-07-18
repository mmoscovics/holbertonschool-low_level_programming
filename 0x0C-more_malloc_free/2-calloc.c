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
	char *point1, *point2;

	if (nmemb == 0 || size == 0)
		return (NULL);
	length = nmemb * size;

	point1 = point2 = malloc(length);
	if (point1 && point2)
	{
		for (count = 0; count < length; count++)
			*point1++ = 0;
	}
	return (point2);
}
