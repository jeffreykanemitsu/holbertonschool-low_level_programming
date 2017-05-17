#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - check the code for Holberton School students..
 * @n: variable being tested.
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%i", i);
			if (i != 98)
			{
			printf(",");
			printf(" ");
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%i", i);
			if (i != 98)
			{
			printf(",");
			printf(" ");
			}
		}
	}
	else
	{
		printf("%i", n);
	}
	
	printf("\n");
}
