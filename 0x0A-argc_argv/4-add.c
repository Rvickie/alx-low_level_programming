#include <stdio.h>
#include <stdlib.>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Function that checks strings
 * that are digits
 * @str: Input
 *
 * Return: Always 0
 */
int check_num(char *str)
{
	/*declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count])) /*check if str there are digits*/
		{
			retrun(0);
		}

		count++;
	}
	return (1);
}

/**
 * main - Function that prints the name
 * of the program
 * @argc: Input
 * @argv: Input
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	/*declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*goes through the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]);
		/*Atoi -- > convert string to int*/

			sum += str_to_int;
		}

		/**
		 * condition if one of the number contains
		 * symbols that are not digits
		 */

		else
		{
			printf(Error\n");
			return (1);
		}

		count++;
	}

	printf(" % d\n", sum); /*print sum*/

	return (0);
}

