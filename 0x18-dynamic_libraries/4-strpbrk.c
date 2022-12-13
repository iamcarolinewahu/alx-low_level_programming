#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: accept if match is found
 * NULL if no byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return ('\0');
}

