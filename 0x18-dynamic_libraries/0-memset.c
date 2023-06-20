#include "main.h"

/**
 * _memset - function that fills a memory block with a certain value
 * @n: number of bytes to be changed
 * @a: address of memory to be filled
 * @d: desired value
 *
 * Return: arrays changed with the new value for n
 */
char *_memset(char *a, char d, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		a[j] = d;
		n--;
	}
	return (a);
}
