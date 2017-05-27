#include "holberton.h"
/**
 * leet - encodes a string into 1337.
 * @s: string
 * Return: a character
 */
char *leet(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
	{
		if (s[x] == 'a' || s[x] == 'A')
		{
			s[x] = '4';
		}
		else if (s[x] == 'e' || s[x] == 'E')
		{
			s[x] = '3';
		}
		else if (s[x] == 'o' || s[x] == 'O')
		{
			s[x] = '0';
		}
		else if (s[x] == 't' || s[x] == 'T')
		{
			s[x] = '7';
		}
		else if (s[x] == 'l' || s[x] == 'L')
		{
			s[x] = '1';
		}
	}
	return (s);
}

