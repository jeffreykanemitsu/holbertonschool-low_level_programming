#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds a and b
 * @a: int 1
 * @b: int 2
 *
 * Return: sum of a and b
 */
int op_add(int a, int b);
{
	return (a + b);
}

/**
 * op_sub - subtracts a from b
 * @a: int 1
 * @b: int 2
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b);
{
	return (a - b);
}

/**
 * op_mul - multiplies a times b
 * @a: int 1
 * @b: int 2
 *
 * Return: product of a times b
 */
int op_mul(int a, int b);
{
	return (a * b);
}

/**
 * op_div - divide a by b
 * @a: int 1
 * @b: int 2
 *
 * Return: result of division of a by b
 */
int op_div(int a, int b);
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of division of a by b
 * @a: int 1
 * @b: int 2
 *
 * Return: returns remainder of the division of a by b
 */
int op_mod(int a, int b);
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
