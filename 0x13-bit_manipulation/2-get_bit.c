#include "holberton.h"
/**
 * get_bit - value of bit at given index
 * @n: value given
 * @index: index starting from 0 of the bit you want
 *
 * Return: value of bit at index or -1 if error occurred
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int result;

	if (index < (sizeof(unsigned long int) * 8))
	{
		result = n >> index;
		result = result & 1;
		return (result);
	}
	else
	{
		return (-1);
	}
}
