#include <stdio.h>
/**
 * main - print single digit numbers from 0
 *
 * Description: print single digit numbers from 0
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
