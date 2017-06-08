#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d grid created by alloc_grid
 * @grid: grid
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
