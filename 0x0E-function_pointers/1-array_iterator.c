#include "function_pointers.h"
/**
 * array_iterator - executes func. given as parameter on each element of array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
