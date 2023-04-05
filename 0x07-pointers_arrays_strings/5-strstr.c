#include "main.h"

/**
 * _strstr - Function that finds the first occurrence
 * of the substring
 * @needle: Input
 * @haystack: Input
 *
 * Return: 0 always
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *d = needle;

		while (*h == *d && *d != '\0')
		{
			h++;

			d++;
		}
		else if (*d == '\0')
			return (haystack);
	}

	return (0);
}
