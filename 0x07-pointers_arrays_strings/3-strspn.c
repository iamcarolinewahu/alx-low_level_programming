#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: main string to be scanned
 * @accept: string containing the list of characters
 * to match in s
 *
 * return: no of matching bytes 
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, cmpt = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cmpt++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (cmpt);
}
