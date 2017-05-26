#include "holberton.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @s: points to char array
 * Return: uppercase letters
 */
char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
		{
			s[x] = s[x] - 32;
		}
	}
	return (s);
}
