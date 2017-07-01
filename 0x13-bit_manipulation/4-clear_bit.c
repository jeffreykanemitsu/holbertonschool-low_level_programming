#include "holberton.h"
/**
 * clear_bit - sets value of a bit to 0 at given index
 * @n: value given
 * @index: index starting from 0 of the bit you want to set
 *
 * Return: 1 if works, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index < (sizeof(unsigned long int) * 8))
	{
		mask = ~(1 << index);
		*n = *n & mask;
		return (1);
	}
	else
	{
		return (-1);
	}
}
