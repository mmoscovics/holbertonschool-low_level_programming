#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - tested function, creates array of chars
 *@size: size of array
 *@c: character in string
 * Return: NULL if 0 or fails, or pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int count;

	if (size == 0)
		return (NULL);
	d = malloc(sizeof(*d) * size);
	for (count = 0; count <= size; count++)
		d[count] = c;
	return (d);
}
