#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints all
 * argument it receives
 * @argc: Input
 * @argv: Input
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}

	return (0);
}
