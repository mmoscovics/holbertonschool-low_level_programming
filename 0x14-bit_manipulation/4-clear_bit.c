#include "holberton.h"

/**
 * clear_bit - tested function, sets value of a bit to 0 at index
 *@n: pointer to given number
 *@index: given index
 * Return: 1 if function works
 * -1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1 << index;

	while (index < 64)
	{
		*n &= ~mask;
		return (1);
	}
	return (-1);
}
