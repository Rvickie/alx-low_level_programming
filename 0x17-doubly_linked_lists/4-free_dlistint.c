#include "lists.h"

/**
 * free_dlistint - function that loose a dlistint_t list
 * @head: input
 *
 */

void free_dlistint(dlistint_t *head)
{

	while (head != NULL)
	{
	dlistint_t *next = head->next;

	free(head);
	head = next;
	}
}
