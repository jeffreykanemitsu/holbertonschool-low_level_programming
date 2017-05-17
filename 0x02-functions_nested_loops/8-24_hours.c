#include "holberton.h"
/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	char y;
	char z;

	for (y = '0'; y <= '5'; y++)
	{
		_putchar(y);
		for (z = '0'; z <= '9'; z++)
		{
			_putchar(z);
		}
	z = 0;
	}
	_putchar('\n');
}
