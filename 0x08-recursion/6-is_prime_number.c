#include "holberton.h"

int primehelp(int n, int count);

/**
 * is_prime_number - tested function
 *@n: tested number
 * Return: 1 for prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	return (primehelp(n, 2));
}

/**
 * primehelp - helper function
 *@n: base number
 *@count: counter
 * Return: counter
 */
int primehelp(int n, int count)
{
	if ((n / 2) < count)
	{
		return (1);
	}
	if (n % count != 0)
		return (primehelp(n, count + 1));
	return (0);
}
