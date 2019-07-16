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
	char *point;
	unsigned int count;

	if (size == 0)
		return (NULL);
	point = malloc(sizeof(*point) * size);
	if (point)
	{
		for (count = 0; count <= size; count++)
			point[count] = c;
		return (point);
	}
	return (NULL);
}
