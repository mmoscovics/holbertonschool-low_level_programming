#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - tested function, freeingallocated memory
 *@grid: grid that was created
 *@height: size of grid
 * Return: maybe
 */
void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height count++)
		free(grid[count]);
	free(grid);
}
