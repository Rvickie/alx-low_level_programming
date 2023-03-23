#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0
 */

void times_table(void)
{
	int i = 0, j = 0, p;

	for (i = 0; i <= 9; ++i)
	{
		_putchar('0');
		_putchar(',');
		for (j = 1; j <= 9; ++j)
		{
			p = i * j;
			if (p / 10 == 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + p);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + p / 10);
				_putchar('0' + p % 10);
			}
			if (j < 9)
			{
				_putchar(',');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
