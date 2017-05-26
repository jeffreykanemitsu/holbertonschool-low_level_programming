#include "holberton.h"
/**
 * rev_string - reverses the string
 * @s: string
 *
 * Return - void
 */
void rev_string(char *s)
{
	int i;
	int j;
	char temp;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j <= i; j++)
		{

		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		}
	}
}
