#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: string pointer
 *
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
