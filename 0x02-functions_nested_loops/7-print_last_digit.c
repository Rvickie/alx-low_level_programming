#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to print the last digit of
 *
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int 1dgt;

	1dgt = n % 10;
	if (1dgt < 0)
	{
		1dgt = 1dgt * -1;
	}
	_putchar(1dgt + '0');
	return (1dgt);
}
