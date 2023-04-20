#include "function_pointers.h"

/**
 * int_index - function that returns index place if
 * comparison = true, else -1
 * @array: input
 * @size: input
 * @cmp: input
 *
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
