#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: double pointer to multi-dimen array
 */
int **alloc_grid(int width, int height)
{
	int **grid, r, c;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	/*if memory is insifficuent*/
	if (!grid)
		return (NULL);

	c = 0;
	while (c < height)
	{
		*(grid + c) = malloc(width * sizeof(int));

		if (!(*(grid + c)))
		{
			while (c--)
				free(*(grid + c));
			free(grid);
			return (NULL);
		}
		r = 0;
		while (r < width)
		{
			*(*(grid + c) + r) = 0;
			r++;

		}
		c++;
	}

	return (grid);
}
