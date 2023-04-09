#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints the number of
 * arguments passed into a program
 * @argc: Input
 * @argv: Input
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
