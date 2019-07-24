#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - tested function
 *@array: array given
 *@size: size of array
 *@action: pointer to function used
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int iter;

	if (action)
		for (iter = 0; iter < size; iter++)
			action(array[iter]);
}
