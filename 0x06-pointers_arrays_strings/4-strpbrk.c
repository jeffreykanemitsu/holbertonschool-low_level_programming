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
	int b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				return (&s[a]);
			}
		}
	}
	return ('\0');
}
