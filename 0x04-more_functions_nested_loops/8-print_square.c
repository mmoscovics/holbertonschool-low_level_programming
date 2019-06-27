#include "holberton.h"

/**
* print_diagonal - tested function
*@size: loop
* Return: 0
*/
void print_square(int size)
{
	int loop, space;
	for (loop = 0 ; loop < size ; loop++)
	{
		for (space = 0 ; space < size ; space++)
		{
			if (size > 0)
			{
				_putchar('#');
			}
			else
			{
				_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
