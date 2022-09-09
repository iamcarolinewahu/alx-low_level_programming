#include <stdio.h>

/**
 * main - prints alphabet letters in both upper and lower case
 *
 * description: prints alphabet letters in both upper and lower case
 *
 * Return: Always 0(success)
 */

int main(void)
{

	int i = 97;
	int j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (j < 91)
	{
		putchar(j);
		j++;
	}
	putchar(10);

	return (0);
}
