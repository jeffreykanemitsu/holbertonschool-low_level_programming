#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 * @n: variable being tested.
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int x = n % 10;

	if (n < 0)
	{
		_putchar((x * -1) + '0');
		return (x * -1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar(x + '0');
		return (x);
	}
}
