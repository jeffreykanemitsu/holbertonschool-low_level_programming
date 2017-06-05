#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc - argument count
 * @argv - argument vector
 *
 * Return: 0 if no number passed, error if contains symbols
 */
int main(int argc, char *argv[])
{
	if (argc < 1)
	{
		puts('0');
	}
	
