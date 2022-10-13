#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a namr
 * @name: string
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
