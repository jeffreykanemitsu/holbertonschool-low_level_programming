#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students.
 *
 */
void more_numbers(void)
{
	int w;
	int x;
	int y;
	int z;

	for (w = 0; w <= 10; w++)
	{
		for (x = 0; x <= 14; x++)
		{
			y = x / 10;
			z = x % 10;

			if (y != 0)
			{
				_putchar(y + '0');
			}
			_putchar(z + '0');
		}
		_putchar('\n');
		
	}
}
