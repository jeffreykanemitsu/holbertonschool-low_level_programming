#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s) + 1);
	}
}

/**
 * _pali - determines if string is palindrome or not
 * @start: start of string
 * @end: end of string
 * @s: string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int _pali(unsigned int start, unsigned int end, char *s)
{
	if (s[start] >= s[end])
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (_pali(start + 1, end - 1, s));
	}
}

/**
 * is_palindrome - uses the _pali function to determine if s is a palindrome
 * @s: string
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = (_strlen_recursion(s));

	return (_pali(0, len - 1, s));
}
