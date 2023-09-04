#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid -   returns a pointer to a 2 dimensional array of integers
  * @width: Width of grid
  * @height: Height of grid
  *
  * Return: Pointer to 2D array, NULL if it fails
  */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int v;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == 0)
	{
		return (0);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == 0)
		{
			for (v = 0; v < i; v++)
			{
				free(grid[v]);
			}

			free(grid);

			return (0);
		}

		for (v = 0; v < width; v++)
		{
			grid[i][v] = (0);
		}
	}

	return (grid);
}
