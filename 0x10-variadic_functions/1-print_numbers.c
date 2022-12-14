#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: no of integers passed to the function
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list num;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(num, int);

		if (separator == NULL)
		{
			if (i == n - 1)
				printf("%d\n", x);
			else
				printf("%d", x);
		}

		else
		{
			if (i == n - 1)
				printf("%d\n", x);
			else
				printf("%d%s ", x, separator);
		}
	}
va_end(num);
}
