#include "holberton.h"
/**
 * print_square - check the code for Holberton School students.
 * @size: variable being tested.
 *
 */
void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)

		_putchar('\n');

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');		
	}
	
}

