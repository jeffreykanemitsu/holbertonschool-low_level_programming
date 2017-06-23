#include "variadic_functions.h"

/**
 * _printchar - prints character
 * list - va_list
 * Return: void
 */
void _printchar (va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * _printint - prints integer
 * list - va_list
 * Return: void
 */
void _printint (va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 * _printfloat - prints float
 * list - va_list
 * Return: void
 */
void _printfloat (va_list list)
{
	printf("%f", va_arg(list, double));
}

/** 
 * _printstring - prints string
 * list - va_list
 * Return: void
 */
void _printstring (va_list list)
{
	char *x;

	x = va_arg(list, char *);
	if (x == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", x);
}

void print_all(const char * const format, ...)
{
	int a;
	int b;
	char *separator = ", ";
	va_list list;

	op_t ops[] = {
		{"c", _printchar},
		{"i", _printint},
		{"f", _printfloat},
		{"s", _printstring},
		{NULL, NULL}
	};
	
	va_start(list, format);
	a = 0;
	while (format != NULL && format[a] != '\0')
	{
		b = 0;
		while (ops[b].op != NULL)
		{
			if (ops[b].op[0] == format[a])
			{
				printf("%s", separator);
				ops[b].f(list);
			}
		}	b++;
		a++;
	}
	va_end(list);
	printf("\n");
}
