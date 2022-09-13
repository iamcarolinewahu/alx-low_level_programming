#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: r is an integer
 *
 * Return: integer
 */

int print_last_digit(int r)
{
	int lastNum = r % 10;

	if (r < 0)
	{
		lastNum = lastNum * -1;
	}
	_putchar(lastNum + '0');
	return (lastNum);
}
