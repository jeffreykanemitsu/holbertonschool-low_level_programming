#include "holberton.h"
/**
 * puts2 - prints one char out of 2 of a string
 * @str: string
 * Return - void
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a])
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
