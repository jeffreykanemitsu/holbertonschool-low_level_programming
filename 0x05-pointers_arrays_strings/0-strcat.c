#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int j;
	int k;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		dest[j] = src[k];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
