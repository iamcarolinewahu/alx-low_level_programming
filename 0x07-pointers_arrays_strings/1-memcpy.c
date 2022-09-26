#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: pointer to the destination array
 * @src: pointer to source of data to be copied
 * @n: number of bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		src[i] = dest[i];

	return (dest);
}
