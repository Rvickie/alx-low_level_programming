#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints the name
 * of the programme
 * @argc: Input
 * @argv: Input
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
