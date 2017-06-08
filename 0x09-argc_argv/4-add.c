#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if no number passed, error if contains symbols
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
		if (!isdigit(argv[x][y]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[x]);
		}
	}
	printf("%i\n", sum);
	return (0);
}
