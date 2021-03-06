#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - tested function, print all format specifiers
 *@format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int nonfmt, iter = 0;
	char *word;

	va_start(args, format);
	while (format && format[iter] != '\0')
	{
		if (iter != 0 && !nonfmt)
			printf(", ");
		switch (format[iter])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			word = va_arg(args, char *);
			if (word == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", word);
			break;
		default:
			nonfmt = 1;
			iter++;
			continue;
		}
		nonfmt = 0;
		iter++;
	}
	printf("\n");
	va_end(args);
}
