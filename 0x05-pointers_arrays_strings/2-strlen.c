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

	while (*s != '\0')
	{
		s++;
		i++;
	}

	return (i);
}
