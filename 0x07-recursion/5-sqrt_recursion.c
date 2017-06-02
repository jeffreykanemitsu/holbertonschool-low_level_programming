#include "holberton.h"
/**
 * NaN - natural number
 * @a: variable being tested
 * @b: variable being tested
 * Return: square root or -1
 */
int NaN(int a, int b)
{
	int c = b * b;

	if (c > a)
	{
		return (-1);
	}
	else if (c == a)
	{
		return (b);
	}
	else
	{
		return (NaN(a, b + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: variable being tested
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	return (NaN(n, 1));
}
