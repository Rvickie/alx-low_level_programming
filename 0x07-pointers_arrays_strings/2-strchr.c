#include "main.h"

/**
 * _strchr - Entry point
 * @s: Input
 * @c: Input
 *
 * Return: 0 (Success)
 */
char *_strchr(char *c, char *s)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
