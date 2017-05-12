#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		putchar(i);

		while (j <= '9')
		{
		putchar(j);
		putchar(',');
		}
		j = j + 1;

	i = i + 1;
	}

	return (0);
}

