#include "variadic_functions.h"
/**
 *sum_them_all - adds all parameters together
 * @n: arguments passed
 *
 * Return: sum of all its parameters, if n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;
	va_list valist;

	if (n == 0)
	{
		return (0);
	}
	va_start(valist, n);
	{
		for (x = 0; x < n; x++)
		{
			sum += va_arg(valist, int);
		}
	}
	va_end(valist);
	return (sum);
}
