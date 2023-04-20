#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Function that prints each array
 * elements on a new line
 * @array: input
 * @size: input
 * @action: input
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
