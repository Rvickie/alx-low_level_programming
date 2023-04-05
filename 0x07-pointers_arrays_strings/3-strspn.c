#include "main.h"

/**
 * _strspn - Entry point
 * @accept: Input
 * @s: Input
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *accept, char *s)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
