#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - check the code for Holberton School students.
 *@n: value
 * Return: void.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98 ; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	else
	{
		for (; n >= 98 ; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
}
