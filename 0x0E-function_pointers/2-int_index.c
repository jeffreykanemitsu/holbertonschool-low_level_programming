#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to array
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of first element, if no elements match or size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
		{
			return (x);
		}
	}
	return (-1);
}
