#include "holberton.h"
/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int w;
	int x;

	for (w = 0; w <= 23; w++)
	{
		int j = w / 10;
		int k = w % 10;

		for (x = 0; x <= 59; x++)
		{
			int l = x / 10;
			int n = x % 10;

			_putchar((j) + '0');
			_putchar((k) + '0');
			_putchar(':');
			_putchar((l) + '0');
			_putchar((n) + '0');
			_putchar('\n');
		}
	}
}
