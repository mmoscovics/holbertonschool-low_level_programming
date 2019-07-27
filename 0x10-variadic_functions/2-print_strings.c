#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - tested function, prints a string passed
 *@separator: separator string
 *@n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argpass;
	unsigned int iter;
	char *place;

	va_start(argpass, n);
	for (iter = 0; iter < n; iter++)
	{
		place = va_arg(argpass, char *);
		if (place == NULL)
			printf("%p", place);
		printf("%s", place);
		va_end(argpass);
		if (iter < n - 1)
		{
			if (separator == NULL)
				break;
			printf("%s", separator);
		}
	}
	printf("\n");
}
