#include "holberton.h"
/**
 * swap_int - swaps values of two integers
 * @a: variable being swapped.
 * @b: variable being swapped.
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
