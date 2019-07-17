#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - tested function, pointer to a 2 dimensional array of ints
 *@width: width of grid
 *@height: height of grid
 * Return: NULL on fail or if width or height <= 0
 */
int **alloc_grid(int width, int height)
{
	int count;
	int **point;

	if (width <= 0 || height <= 0)
		return (NULL);
	point = (int **)malloc(sizeof(int *) * height);
	if (point)
	{
		for (count = 0; count < height; count++)
		{
			point[count] = (int *)malloc(sizeof(int) * width);
			if (point[count])
				return (point);
			else
				return (NULL);
		}
	}
	return (NULL);
}
