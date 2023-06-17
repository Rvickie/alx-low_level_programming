#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a
 * dlistint_t linked list
 * @head: input
 * @index: input
 *
 * Return: when the node does not exist, return NULL
 * where index is the index of the node, starting from 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int k;

	current = head;
	k = 0;
	while (current != NULL)
	{
		if (k == index)
			return (current);
		current = current->next;
		k++;
	}
	return (NULL);
}
