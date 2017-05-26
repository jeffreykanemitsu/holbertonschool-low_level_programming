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

	n--;
	for (x = 0; x < n ; n--, x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
		
	}
}
