#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: maximum number of arguments
 *
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	unsigned int i;
	int sum = 0;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(nums, int);
		sum += x;
	}
	return (sum);
	va_end(nums);
}
