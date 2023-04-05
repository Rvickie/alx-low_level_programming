#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: Input
 * @needle: Input
 *
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		else if (*j == '\0')
			return (haystack);
	}

	return (0);
}
