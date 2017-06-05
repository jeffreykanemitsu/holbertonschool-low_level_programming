#include "holberton.h"
/**
 * _strncat - check the code for Holberton School students.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int k;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (k = 0; k < n; k++)
	{
		dest[j] = src[k];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
