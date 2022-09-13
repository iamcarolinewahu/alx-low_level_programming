#include "main.h"

/*
 * print_alphabet: prints lowercase alphabet
 *
 */

int print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
	_putchar(i);
	}
}

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		print_alphabet();
	}
}

