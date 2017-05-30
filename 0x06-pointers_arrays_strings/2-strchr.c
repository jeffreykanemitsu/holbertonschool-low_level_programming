#include "holberton.h"
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @s: string "hello"
 * @c: character
 *
 * Return: either the return value of s[a] or NULL
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return (0);
}
