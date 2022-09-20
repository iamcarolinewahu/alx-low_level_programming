#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of array
 * @a: pointer to array
 * @n: integer
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		
		if (i != n)
			ptintf(", ");
	}
	printf("\n");
}
