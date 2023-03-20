#include <stdio.h>

/**
 * main - main function
 *
 * Rturn: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
	putchar('\n');
	return (0);
}
