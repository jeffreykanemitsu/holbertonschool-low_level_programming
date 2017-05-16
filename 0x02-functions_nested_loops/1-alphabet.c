#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	char s[] = "abcdefghijklmnopqrstuvwxyz\n";

	while (s[i])
	{
		_putchar (s[i]);
		i++;
	}

	return (0);
}
