#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees 2 dimensional grid
 * @grid: The 2D array to be freed
 * @height: The height of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
