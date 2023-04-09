#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints the name
 * of the programme
 * @argc: Number of arguements
 * @argv: Array of arguements
 *
 * Return: Always 0
 */
int main(argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
