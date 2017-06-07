#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: NULL if NULL. on success, returns pointer to dup string
 */
char *_strdup(char *str)
{
	int x;
	int y;
	char *z;

	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
	{
		y++;
	}
	z = malloc(x * sizeof(char) + 1);
	if (z == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x] != '\0'; x++)
	{
		z[x] = str[x];
	}
	z[x] = '\0';
	return (z);
}
