#include "main.h"

/**
 * _strstr - Function that finds the first occurrence
 * of the substring
 * @needle: Input
 * @haystack: Input
 *
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;

			p++;
		}
		else if (*p == '\0')
			return (haystack);
	}

	return (0);
}
