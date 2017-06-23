#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _printchar (va_list list);
void _printint (va_list list);
void _printfloat (va_list list);
void _printstring (va_list list);

/**
 * struct - struct that takes in type
 * @op: argument type such as char, int, float, string
 * @f: function
 *
 * Return: void
 */
typedef struct op
{
	char *op;
	void (*f)(va_list);
} op_t;

#endif
