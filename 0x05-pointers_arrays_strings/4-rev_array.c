#include "holberton.h"
/**
 * reverse_array - reverses array a using n
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;
	int z;


	for (x = 0; x < n ; x++, n--)
	{
		y = a[x];
		z = a[n];
		a[n] = y;
		a[x] = z;
	}
}
