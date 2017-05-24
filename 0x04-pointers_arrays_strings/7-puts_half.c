#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void.
 */
void puts_half(char *str)
{
	int i;
	int j;

	while (str[i])
	{
		i++;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = i / 2 + 2;
	}
	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
