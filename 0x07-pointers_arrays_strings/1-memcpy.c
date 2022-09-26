#include "main.h"

/**
 * _memcpy - copies the memory area from src to dest
 * @dest: destination
 * @src: source
 * @n: max bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		 dest[i] = src[i];

	return (dest);
}
