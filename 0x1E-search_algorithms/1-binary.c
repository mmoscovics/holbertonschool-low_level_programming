#include "search_algos.h"

/**
 * binary_search - Function that searches for a value using binary search
 * @array: pointer to the first element of array
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);
	i = binary_searcher(array, 0, size - 1, value);
	return (i);
}

/**
 * binary_searcher - A recursive binary search function
 * @array: pointer to the first element of the array
 * @l: left position
 * @r: right position
 * @value: value to search for
 * Return: index where value is located or -1
 */

size_t binary_searcher(int *array, size_t l, size_t r, int value)
{
	unsigned int mid;

	print_array(array, l, r);
	if (r >= l)
	{
		mid = l + (r - l) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binary_searcher(array, l, mid - 1, value));
		return (binary_searcher(array, mid + 1, r, value));
	}
	return (-1);
}

/**
 * print_array - prints out array being searched
 * @array: array to print
 * @l: left position
 * @r: right position
 */

void print_array(int *array, size_t l, size_t r)
{
	unsigned int i;

	printf("Searching in array:");
	for (i = l; i <= r; i++)
	{
		if (i != l)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}
