#include "main.h"

/**
 * free_grid - it frees the 2 dimensional grid previously
 * created by the alloc_grid function
 *
 * @grid: it provides the grid to free the previous
 * @height: gives the height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; ++i)
		free(grid[i]);
	free(grid);
}
