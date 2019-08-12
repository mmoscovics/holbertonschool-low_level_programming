#include "holberton.h"

/**
 * print_binary - tested function, prints binary representation of a number
 *@n: number input
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	n = n & 1;
	_putchar(n + '0');
}
