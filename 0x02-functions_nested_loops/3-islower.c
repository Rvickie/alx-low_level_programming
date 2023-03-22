#include "main.h"

/**
 * _islower - function to print lower case
 *
 * @c: parameter to be printed
 *
 * Return: 1 if c is a lower case
 *and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
