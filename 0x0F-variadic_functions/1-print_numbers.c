#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: adds comma and space
 * @n: number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list valist;

	for (x = 0; x < n; x++)
	{
		printf ("%d", va_arg(valist, int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf ("\n");
	va_end (valist);
}
