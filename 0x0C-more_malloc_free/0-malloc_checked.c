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

	void *point;

	point = malloc(b);
	if (point)
		return (point);
	exit(98);
}
