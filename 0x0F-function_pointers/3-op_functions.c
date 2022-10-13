#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - performs sum of integers
 * @a: integer 1
 * @b: integer 2
 * Return: sum of 2 integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs difference of integers
 * @a: integer 1
 * @b: integer 2
 * Return: difference of 2 integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 integers
 * @a: integer 1
 * @b: integer 2
 * Return: multiple of 2 integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 integers
 * @a: integer 1
 * @b: integer 2
 * Return: division result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates module
 * @a: integer 1
 * @b: integer 2
 * Return: remainder of division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
