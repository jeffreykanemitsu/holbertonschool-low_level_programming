#include "holberton.h"
/**
 * _islower - check the code for Holberton School students.
 * @c: lowercase variable being tested.
 * Return: Always 0.
 */
int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
