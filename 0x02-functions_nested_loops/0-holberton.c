#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char s[] = "Holberton\n";

	while (s[i])
	{
		_putchar (s[i]);
		i++;
	}
	return (0);
}
