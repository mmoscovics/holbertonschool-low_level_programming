#include "holberton.h"

/**
 * get_bit - tested function, returns value of a bit at given index
 *@n: given number
 *@index: location of bit of number
 * Return: value of a bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n = ((n >> index) & 1);
		if (index < 64)
			return (n);
		else
			return (-1);
}
