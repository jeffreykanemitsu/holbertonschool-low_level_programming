#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
