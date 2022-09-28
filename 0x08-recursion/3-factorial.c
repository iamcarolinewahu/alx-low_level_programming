#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: number to calculate factorial
 *
 * Return: -1 if n is lover than 0
 * else return factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
