#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
			i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
