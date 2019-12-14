#include "lists.h"

/**
 * free_dlistint - frees linked list
 * @head: pointer to start of linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *pos;

	while (head)
	{
		pos = head;
		head = head->next;
		free(pos);
	}
}
