#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers to be reversed
 * @n: Number of elements of the array
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] < n; i++)
	{
		_putchar (a[i]);
	}

	while (i--)
	{
		_putchar (a[i]);
	}
}
