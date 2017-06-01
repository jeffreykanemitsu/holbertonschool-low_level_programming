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
	int a;
	int b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (acceptp[b] == s[a])
			{
				break;
			}
		}
		if (!accept[b])
		{
			break;
		}
	}
	return (a);
}
