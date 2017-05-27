#include "holberton.h"
/**
 * rot13 - using rot13 to encode a string
 * @s: character being changed
 * Return: Always 0.
 */
char *rot13(char *s)
{
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; in[b]; b++)
		{
			if (s[a] == in[b])
			{
				s[a] = out[b];
				break;
			}
		}
	}
	return (s);
}
