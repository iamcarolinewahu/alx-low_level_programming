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
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	return (0);
}
