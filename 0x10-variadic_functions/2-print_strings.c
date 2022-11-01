#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: no. of strings passed to the function
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int *x;
	va_list num;

	if (n == 0)
	{
		printf("(nil");
	}

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		x = var_arg(num, char *);
			if (separator == NULL)
			{
				if (i == n - 1)
					printf("%s\n");
				else
					printf("%s", x);
			}
			else
			{
				if (i == n - 1)
					printf("%s\n", x);
				else
					printf("%s%s", x, separator);
			}
	}
	va_end(num);
}
