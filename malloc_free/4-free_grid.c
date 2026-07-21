#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously allocated by alloc_grid
 * @grid: the grid to free
 * @height: the height of the grid (number of rows)
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int h;

	h = 0;
	while (h < height)
	{
		free(grid[h]);
		h++;
	}

	free(grid);
}
