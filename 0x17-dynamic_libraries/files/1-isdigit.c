#include "holberton.h"
/**
 * _isdigit - check the code for Holberton School students.
 * @c: variable being tested.
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int x;

	if (c >= '0' && c <= '9')
	{
		x = 1;
	}
	else
	{
		x = 0;
	}
	return (x);
}
