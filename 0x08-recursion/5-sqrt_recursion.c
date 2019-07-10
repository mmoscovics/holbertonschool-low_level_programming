#include "holberton.h"

int _sqhelp(int count, int n);

/**
 * _sqrt_recursion - tested function
 *@n: tested number
 * Return: square root of tested number
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (_sqhelp(n, n));
}
/**
 * _sqhelp - helper function
 *@count: counter
 *@n: original tested number
 * Return: counter
 */
int _sqhelp(int count, int n)
{
	if (count == 0)
		return (-1);
	if (count * count == n)
		return (count);
	return (_sqhelp(count - 1, n));
}
