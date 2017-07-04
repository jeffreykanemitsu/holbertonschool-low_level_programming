#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: value given
 * @index: index starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, -1 if error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index < (sizeof(unsigned long int) * 8))
	{
		mask = 1 << index;
		*n = *n | mask;
		return (1);
	}
	else
	{
		return (-1);
	}
}
