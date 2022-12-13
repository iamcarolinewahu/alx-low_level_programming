#include "main.h"

/**
 * _memset - fills the memory with constant bytes
 * @s: pointer to the block of memory to fill
 * @b: value to be set
 * @n: number of times to fill
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
