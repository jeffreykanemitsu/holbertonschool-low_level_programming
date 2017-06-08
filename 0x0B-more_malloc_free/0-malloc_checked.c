#include "holberton.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: amount allocated
 * Return: pointed to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
