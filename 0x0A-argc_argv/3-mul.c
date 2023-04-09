#include <stdio.h>
#include "main.h"

/**
 * _atoi - Function that converts a
 * string to an integer
 * @s: Input
 *
 * Return: The integer converted from
 * the string
 */
int _atoi(char *s)
{
	int j;
	int d;
	int n;
	int len;
	int f;
	int digit;

	j = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (j < len && f == 0)
	{
		if (s[j] == '-')
			++d;

		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			f = 0;
		}
		j++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - Function that multiplies two numbers
 * @argc: Input
 * @argv: Input
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
