#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 *
 * Return: newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x;
	unsigned int y;
	unsigned int z;
	char *con;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}
	for (x = 0; s1[x]; x++)
	{
		;
	}
	for (y = 0; s2[y]; y++)
	{
		;
	}
	con = malloc((x + y + 1) * sizeof(int));
	if (con == NULL)
	{
		return (NULL);
	}
	for (z = 0; z < x; z++)
	{
		con[z] = s1[z];
	}
	for (y = 0; y < n; y++, z++)
	{
		con[z] = s2[y];
	}
	return (con);
}
