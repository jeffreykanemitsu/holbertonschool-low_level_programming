#include "holberton.h"
/**
 * factorial - returns the factorial of a given number
 * @n: variable being tested
 * Return: factorial of value n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return(n * factorial(n - 1));
}
