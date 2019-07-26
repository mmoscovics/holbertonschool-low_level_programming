#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - tested function, adds all arguments together
 *@n: number of arguments
 * Return: sum of args
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argpassed;
	unsigned int iter;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(argpassed, n);
	for (iter = 0; iter < n; iter++)
		sum += va_arg(argpassed, int);
	va_end(argpassed);
	return (sum);
}
