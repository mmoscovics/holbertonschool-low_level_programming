#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given postion
 * @h: pointer to start of linked list
 * @idx: index position
 * @n: int value of node
 * Return: addreess of new node or NULL if fail or if cannot add at position
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *pos = *h;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	for (i = 0; pos; i++, pos = pos->next)
	{
		if (pos->next == NULL && i == idx - 1)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		if (i == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = pos->next;
			new->prev = pos;
			pos->next->prev = new;
			pos->next = new;
			return (new);
		}
	}
	return (NULL);
}
