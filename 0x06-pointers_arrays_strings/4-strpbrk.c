#include "holberton.h"
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string s
 * @accept: string accept
 *
 * Return: returns a pointer to byte that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == accept[a])
		{
			return (&s[a]);
		}
	}
	return (0);
}
