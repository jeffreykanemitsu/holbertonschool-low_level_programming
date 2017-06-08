#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of array
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ar;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ar = malloc(nmemb * sizeof(int));
	if (ar == 0)
	{
		return (NULL);
	}
	for (x = 0; x < nmemb; x++)
	{
		ar[x] = nmemb;
	}
	return (ar);
}
