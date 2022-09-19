#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (i--)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
