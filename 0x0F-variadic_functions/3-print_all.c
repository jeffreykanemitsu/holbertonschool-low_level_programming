#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _printchar - prints character
 * list - va_list
 * Return: void
 */
void _printchar (va_list list)
{
	printf("%c", va_arg(va_list, char));
}

/**
 * _printint - prints integer
 * list - va_list
 * Return: void
 */
void _printint (va_list list)
{
	printf("%i", va_arg(va_list, int));
}

/**
 * _printfloat - prints float
 * list - va_list
 * Return: void
 */
void _printfloat (va_list list)
{
	printf("%f", va_arg(va_list, int));
}

/** 
 * _printstring - prints string
 * list - va_list
 * Return: void
 */
void _printstring (va_list list)
{
	x = va_arg(va_list, char *);
	if (x == NULL)
	{
		printf("(nil)");
	}
	printf("%s", x);
}

void print_all(const char * const format, ...)
{
	int a = 0;
	int b = 0;
	char *separator = ", ";
	va_list list;

	op_t ops[] = {
		{"c", _printchar},
		{"i", _printint},
		{"f", _printfloat},
		{"s", _printstring},
		{NULL, NULL},
	};
	
	va_start(list, format);
	while (format[a] != NULL && format[a] != '\0')
	{
		while (ops[b].f)
		{
			if (ops[b].op[0] == format[a])
			{
				printf("%s", separator);
			}
		}	b++;
		a++;
	}
	va_end(list);
	printf("\n");
}
