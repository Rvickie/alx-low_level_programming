#include "main.h"

/**
 * _strspn - Entry point
 * @accept: Input
 * @s: Input
 *
 * Return: 0 (Success)
 */
unsigned int _strspn(char *accept, char *s)
{
	unsigned int n = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
