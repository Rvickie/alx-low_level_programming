#include "lists.h"

/**
 * sum_dlistint - function that returns the addition
 * of all the data (n) of a dlistint_t linked list
 * @head: input
 *
 * Return: return 0, when the list is empty
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}
