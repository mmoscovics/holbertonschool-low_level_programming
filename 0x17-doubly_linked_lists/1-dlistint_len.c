#include "lists.h"

/**
 * dlistint_len - returns numbeer of elements
 * @h: header of the linked list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++, h = h->next)
		;
	return (i);
}
