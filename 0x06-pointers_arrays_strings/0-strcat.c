#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 *
 * Return: Dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;
	j = 0;

	while (src[j] != '\0')
		j++;

	dest[i] += src[j];

	return (dest);

}
