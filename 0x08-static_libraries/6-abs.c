#include "holberton.h"
#include <stdio.h>

/**
 * _abs - check the code for Holberton School students.
 * @r: variable being tested.
 * Return: Always 0.
 */
int _abs(int r)
{
	int result;

	if (r == '0')
	{
		result = '0';
	}
	else if (r < 0)
	{
		result = r * -1;
	}
	else
	{
		result = r;
	}
	return (result);
}
