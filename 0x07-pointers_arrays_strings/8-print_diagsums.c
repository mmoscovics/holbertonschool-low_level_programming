#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - tested function
 *@a: array
 *@size: size of row of array of string
 */
void print_diagsums(int *a, int size)
{
	int loop1, loop2, sum1, sum2, count1, count2, size_max, size_start;

	size_max = size * size;
	count1 = size + 1;
	count2 = size - 1;
	sum1 = 0;
	sum2 = 0;
	size_start = size * (size - 1);
	for (loop1 = 0; loop1 < size_max; loop1 += count1)
	{
		sum1 += a[loop1];
	}
	for (loop2 = size_start; loop2 > 0; loop2 -= count2)
	{
		sum2 += a[loop2];
	}
	printf("%d, %d\n", sum1, sum2);
}
