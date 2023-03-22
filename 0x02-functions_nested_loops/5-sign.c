#include "main.h"

/**
 * print_sign - check for signs
 *
 * @n: the character to be checked
 *
 * Return: 1 if n is > 0, else if 0return0, else -1 if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
