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
	unsigned int length = 0;
	char *con;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}
	for ((length = 0; s1[length] = '\0'; length++))
	{
		;
	}
	con = malloc((length + n + 1) * sizeof(char));
	if (con == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1 && s1[x]; x++)
	{
		con[x] = s1[x];
	}
	for (y = 0; s2 && s2[y] && y < n; y++)
	{
		con[x + y] = s2[y];
	}
	con[x + n] = '\0';
	return (con);
}
