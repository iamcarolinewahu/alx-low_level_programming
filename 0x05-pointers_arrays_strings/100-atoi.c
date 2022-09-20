#include "main.h"

/**
 * _atoi convert string to an integer
 * @s: string to be converted
 * Description: converts string to integer considering all negatives
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i, val, sign;

	val = 0;
	sign = 1;

	for (i = 0; s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'); i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
	}

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			val = val * 10 + sign * (s[i] - '0');
		if (val != 0 && !(s[i] >= '0' && s[i] <= '9'))
			return (val);
	}
	return (val);
}
