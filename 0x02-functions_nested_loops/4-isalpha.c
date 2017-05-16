#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * @c: variable that is being tested.
 * Return: Always 0.
 */

int _isalpha(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
