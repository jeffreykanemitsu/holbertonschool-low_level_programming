#include "holberton.h"
/**
 * _prime - prime number
 * @n: variable being tested
 * @div: variable being tested
 *
 * Return: 1 if input integer is prime, otherwise 0
 */
int _prime(int n, int div)
{
	if (n == div)
	{
		return (1);
	}
	else if (n % div == 0)
	{
		return (0);
	}
	else
	{
		return (_prime(n, div + 1));
	}
}

/**
 * is_prime_number - checks to see if the integer is a prime number
 * @n: variable being tested
 * Return: 1 if the input integer is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
	return (_prime(n, 2));
	}
}

