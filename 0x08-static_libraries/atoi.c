#include "holberton.h"
/**
 * _atoi - o
 * @s: s
 * Return - 0
 */
int _atoi(char *s)
{
	int b;

	for (b = 0; s[b] != '\0'; b++);
	return (b);
}
