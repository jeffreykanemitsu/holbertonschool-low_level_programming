#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints multiple strings
 * @separator: string printed between the strings
 * @n: number of strings passed to function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *y;
	va_list valist;

	va_start(valist, n);
	for (x = 0; x < n; x++)
	{
		y = va_arg(valist, char *);
		if (y == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", y);
		}
		if (separator != NULL && x != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
