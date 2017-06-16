#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */
int main (int argc, char *argv[])
{
	int x;
	int y;
	int (*fp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fp = get_op_func(argv[2]);
	if (fp == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("%d\n", fp(x, y));

	return (0);
}
