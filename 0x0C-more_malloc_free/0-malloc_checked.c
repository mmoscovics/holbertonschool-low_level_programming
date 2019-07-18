#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - tested function, allocates memory
 *@b: memory size
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{

	int *point;

	point = malloc(b);
	if (!point)
		exit(98);
	return (point);
}
