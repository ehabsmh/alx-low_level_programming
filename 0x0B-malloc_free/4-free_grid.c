#include "main.h"

void free_grid(int **grid, int height)
{
  int i;

  free(grid);

  for (i = 0; i < height; i++)
    free(grid[i]);
}
