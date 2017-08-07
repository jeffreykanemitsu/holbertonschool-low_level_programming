

#include "holberton.h"
/**
 * _isupper - check the code for Holberton School students.
 * @c: variable being tested.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	int x;

	if (c >= 'A' && c <= 'Z')
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
	return (x);
}
