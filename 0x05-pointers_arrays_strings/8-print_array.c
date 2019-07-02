#include "holberton.h"
#include <stdio.h>

/**
* print_array - tested function
*@a: string
*@n: number of elements
* Return: maybe?
*/
void print_array(int *a, int n)
{
	int length;

	for (length = 0 ; length < n ; ++length)
	{
		printf("%d", a[length]);
		if (length >= 0 && length < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
