#include "main.h"

/**
 * _memcpy - function that copies the memory area
 * @n: number of bytes
 * @src: where memory is copied
 * @dest: where memory is stored
 *
 * Return: memory copied with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int j = n;

	for (; k < j; k++)
	{
		dest[k] = src[k];

		n--;
	}
	return (dest);
}
