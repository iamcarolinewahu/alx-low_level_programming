#include <stdio.h>
/**
 * main - prints characters a to z
 *
 * description: printd alphabet a to z in lower case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
