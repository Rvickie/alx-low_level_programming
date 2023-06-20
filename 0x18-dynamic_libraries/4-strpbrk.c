#include "main.h"

/**
 * _strpbrk - function that locates the first
 * occurrence in the string
 * @s: Bytes in string
 * @accept: Pointer to the bytes which matches
 *
 * Return: 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
		if (*s == accept[j])
		return (s);
		}
	s++;
	}

	return ('\0');
}
