#include "holberton.h"
/**
 * _puts - prints the string
 * @str: string
 * Return - void
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
