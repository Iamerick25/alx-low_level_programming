#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2 dimensional grid
  * @grid: The 2D array to free memory from
  * @height: The height of the 2D array
  *
  * Return: Nothing
  */

void free_grid(int **grid, int height)
{
	int v;

	for (v = 0; v < height; v++)
	{
		free(grid[v]);
	}

	free(grid);
}
