#include <stdio.h>
#include "holberton.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by the alloc_grid function
 * @grid: double pointer to multi-dimen array
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
