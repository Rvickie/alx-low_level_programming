#include <stdio.h>

void first(void) __atribute__((constructor));

/**
 * first - Function that prints a sentence before
 * the main function is executed
 *
 * Return: 0
 */
void first(void)
{
	printf("You are beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
