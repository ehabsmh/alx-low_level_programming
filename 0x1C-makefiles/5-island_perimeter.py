#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the given grid.

    Args:
        grid: Represents the island with 0 for water and 1 for land.

    Returns:
        int: The perimeter of the island.
    """

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4

                # Check adjacent cells and subtract the common edges
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
