#include "holberton.h"

/**
 * factorial - tested function
 *@n: start number / integer
 * Return: factorial of number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (n);
	return (n * factorial(n - 1));
}
