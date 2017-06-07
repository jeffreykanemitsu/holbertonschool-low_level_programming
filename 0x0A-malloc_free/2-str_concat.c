#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat = '\0';
	int x;
	int y;
	int length1 = 0;
	int length2 = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (concat);
	}
	for (x = 0; s1[x]; x++)
	{
		length1++;
	}
	for (y = 0; s2[y]; y++)
	{
		length2++;
	}
	concat = malloc((length1 + length2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < length1; x++)
	{
		concat[x] = s1[x];
	}
	y = x;
	for (x = 0; x < length2; x++, y++)
	{
		concat[y] = s2[x];
	}
	concat[y] = '\0';
	return (concat);
}
