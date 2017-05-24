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

	for (i = 0; src[i]; i++)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest [i] = '\0';
	}
	return (dest);
}
