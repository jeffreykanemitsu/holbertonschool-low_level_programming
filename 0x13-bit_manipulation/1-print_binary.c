#include "holberton.h"
/**
 * print_binary - prints binary representation of num
 * @n: value to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int x;
	unsigned long int r;
	unsigned long int l;
	short int switch_on = 0;
	unsigned long int size;

	size = sizeof(unsigned long int) * 8;
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			l = n << 1;
			r = l >> 1;
			if (n != r)
			{
				switch_on = 1;
				_putchar('1');
			}
			else if (switch_on == 1)
			{
				_putchar('0');
			}
			n = n << 1;
		}
	}
}
