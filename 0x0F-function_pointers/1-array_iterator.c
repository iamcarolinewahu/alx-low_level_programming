#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes the function on an array
 * @array: array to operate on
 * @size: size of array
 * @action: function to execute
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
