#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by alloc_grid function.
 *
 * @grid: pointer to two dimensional array.
 * @height: Number of columns.
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);
}
