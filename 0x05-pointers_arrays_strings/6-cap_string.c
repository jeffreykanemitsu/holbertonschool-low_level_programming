#include "holberton.h"
/**
 * cap_string - capitalize all words of a string
 * @string: variable being changed
 * Return: Always 0.
 */
char *cap_string(char *string)
{
	int length;
	int i;
	char a[] = " \t\n,;.!?\"(){}";

	for (length = 0; string[length] != '\0'; length++)
	{
		if (string[length] >= 'a' && string[length] <= 'z')
		{
			if (length == 0)
			{
				string[length] -= ('a' - 'A');
			}
			else
			{
				for (i = 0; a[i] != '\0'; i++)
				{
					if (a[i] == string[length - 1])
					{
						string[length] -= ('a' - 'A');
					}
				}
			}
		}
	}
	return (string);
}














