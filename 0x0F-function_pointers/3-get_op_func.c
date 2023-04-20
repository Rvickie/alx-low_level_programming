#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Function that selects the correct function
 * to perform the operation asked by the user
 * @s: input
 *
 * Return: A pointer to the function corresponding
 * to the operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int j = 0;

	while (ops[j].op != NULL && *(ops[j].op) != *s)
		j++;

	return (ops[i].f);
}
