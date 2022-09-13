#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	int round = '0';
	int alphabet;

	while (round <= 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');

		round++;
	}
}
