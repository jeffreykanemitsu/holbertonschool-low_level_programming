#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array of integers
 * @a: array
 * @n: number of elements
 *
 * Return - void
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != 0)
		{
			printf(", ");
		}
		printf("%d", a[x]);
	}
	printf("\n");
}
