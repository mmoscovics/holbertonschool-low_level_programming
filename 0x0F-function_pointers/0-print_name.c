#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - tested function, function to print name
 *@name: name input
 *@f: function pointer, points to name input
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
