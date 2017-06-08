#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ar;
	int x;

	if (min > max)
	{
		return (NULL);
	}
	ar = malloc((max - min + 1) * sizeof(int));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (x = 0; min <= max; x++, min++)
	{
		ar[x] = min;
	}
	return (ar);
}
