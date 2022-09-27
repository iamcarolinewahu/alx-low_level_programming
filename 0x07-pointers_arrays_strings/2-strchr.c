#include "main.h"

/**
 * _strchr - locates the character in a string
 * @s: string to be scanned
 * @c: character to be searched
 *
 * Return: s if character is located,
 * NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s >= '\0')
	{
		if (*s == c)
			return (s + i);
		s++;
	}

	return ('\0');
}
