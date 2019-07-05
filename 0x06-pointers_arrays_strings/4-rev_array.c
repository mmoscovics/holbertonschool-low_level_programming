#include "holberton.h"

/**
 *
 *
 *
 */
void reverse_array(int *a, int n)
{
	int start, temp;
	start = 0;

	while (start < n / 2)
	{
		temp = a[start];
		a[start] = (a[n - start - 1]);
		(a[n - start - 1]) = temp;
		start++;
	}
}
