#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: int
 * @c: char
 *
 * Return: pointer to array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *y = NULL;

	if (size == 0)
	{
		return (NULL);
	}
	y = malloc(size * sizeof(char));
	if (y == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		y[x] = c;
	}
	return (y);
}
