#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: Input
 *
 * Return: 0 always
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1)
	}

	_putchar('\n')
}
