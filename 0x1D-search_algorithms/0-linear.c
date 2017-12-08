#include "search_algos.h"
/**
 * linear_search - search for value in array of integers
 * @array: points to first element of array
 * @size: size of array
 * @value: value being searched for
 * Return: index or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
