#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a doubly linked list
 * @head: pointer to start of linked list
 * @index: nth position of linked list
 * Return: nth node of linked list or NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *pos = head;
	unsigned int i;

	for (i = 0; pos; i++, pos = pos->next)
		if (i == index)
			return (pos);
	return (NULL);
}
