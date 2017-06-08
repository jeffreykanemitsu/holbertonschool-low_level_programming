#include "holberton.h"

#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: width of grid
 * @height: height of grid
 *
 * Return: NULL if failure or if width/height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int x;
	int y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		p[x] = malloc(width * sizeof(int));
		if (p[x] == NULL)
		{
			while (x != 0)
			{
				free(p[--x]);
			}
			free(p);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			p[x][y] = 0;
		}
	}
	return (p);
}
