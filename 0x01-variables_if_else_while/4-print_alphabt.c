#include <stdio.h>

/**
 * main - printletters of alphabet except e, q
 *
 * Description: print letters of alphabet in lowercase except e, q
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return (0);
}
