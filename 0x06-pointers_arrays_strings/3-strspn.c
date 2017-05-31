#include "holberton.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: ?
 *
 * Return: return number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0' && s[a] != accept[b])
		{
			b++;
		}
		if (accept[b] == '\0')
		{
			return (a);
		}
		a++;
	}
	return (b);
}		
