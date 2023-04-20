#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function that prints name
 * @name: input
 * @f: input
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
