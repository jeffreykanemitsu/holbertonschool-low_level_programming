#include "holberton.h"
/**
 * print_triangle - check the code for Holberton School students.
 * @size: variable being tested.
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int space;
	int hash;
	int j;
	int k;
	int l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= size; j++)
		{
			space = (size - j);
			hash = (size - space);
			for (k = 1; k <= space; k++)
			{
				_putchar(' ');
			}
			for (l = 1; l <= hash; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
