#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - tested function, prints all arguments
 *@separator: separating arguments
 *@n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argpassed;
	unsigned int iter;
	int place;

	va_start(argpassed, n);
	for (iter = 0; iter < n; iter++)
	{
		place = va_arg(argpassed, int);
		printf("%d", place);
		va_end(argpassed);
		if (iter < (n - 1))
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
}
