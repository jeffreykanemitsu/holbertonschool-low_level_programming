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
	unsigned int *ar;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ar = malloc(nmemb * sizeof(size));
	if (ar == 0)
	{
		return (NULL);
	}
	for (x = 0; x < nmemb; x++)
	{
		ar[x] = 0;
	}
	return ((void *)ar);
}
