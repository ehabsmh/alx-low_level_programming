#include "main.h"

/**
 * alloc_grid - allocates memory for 2 dimensional array of integers.
 * @width: Number of rows.
 * @height: Number of columns.
 *
 * Return: NULL if width or height is 0 or negative
 * OTHERWISE return pointer to the allocated memory.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
				free(grid);
				return (NULL);
			}
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
