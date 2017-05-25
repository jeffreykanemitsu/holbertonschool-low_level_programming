#include "holberton.h"
/**
 * _strcpy - copies the string pointed to by src
 * @src: source
 * @dest: destination
 *
 * Return: value of pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (src == '\0')
	{
		return ('\0');
	}
	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
