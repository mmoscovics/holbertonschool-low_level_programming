#include "search_algos.h"

/**
 * linear_search - Function that searches for a value using linear search
 * @array: pointer to the first element of array
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
