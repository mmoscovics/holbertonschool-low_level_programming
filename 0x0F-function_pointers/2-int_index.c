#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - tested function
 *@array:
 *@size: number of elements in array
 *@cmp: pointer to function to compare values
 * Return: index of first element when cmp function doesnt return 0, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int iter, hold;

	if (size <= 0)
		return (-1);
	if (cmp)
		if (array)
			for (iter = 0; iter < size; iter++)
			{
				hold = (cmp(array[iter]));
				if (hold != 0)
					return (iter);
			}
	return (-1);
}
