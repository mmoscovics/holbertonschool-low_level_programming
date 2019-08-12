#include "holberton.h"

/**
 * set_bit - tested function, sets the value of a bit to 1 at index
 *@n: pointer to given number
 *@index: given index
 * Return: 1 if function worked
 * -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;

	while (index < 64)
	{
		*n |= mask;
		return (1);
	}
	return (-1);
}
