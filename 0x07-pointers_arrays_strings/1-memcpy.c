#include "main.h"

/**
 * _memcpy - function that copies the memory area
 * @n: number of bytes
 * @src: where memory is copied
 * @dest: where memory is stored
 *
 * Return: memory copied with n bytes changed
 */
char *_memcpy(char *src, char *dest, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
