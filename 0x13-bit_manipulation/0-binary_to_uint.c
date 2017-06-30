#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to string of 0 and 1 char
 *
 * Return: converted number, or 0 if 1 or more char or if b == NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int len;

	if (b == NULL)
	{
		return (0);
	}
	num = 0;
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] == '0')
		{
			num = num << 1;
		}
		else if (b[len] == '1')
		{
			num = num << 1;
			num += 1;
		}
	}
	return (num);
}
