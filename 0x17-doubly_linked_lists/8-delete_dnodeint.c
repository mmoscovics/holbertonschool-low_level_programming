#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: pointer to start of linked list
 * @index: index position
 * Return: 1 if successful, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *pos = *head, *hold;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		hold = pos;
		*head = pos->next;
		if (pos->next)
			pos->next->prev = NULL;
		free(hold);
		return (1);
	}
	for (i = 0; pos; i++, pos = pos->next)
		if (pos->next && i == index - 1)
		{
			hold = pos->next;
			pos->next = hold->next;
			if (pos->next)
				pos->next->prev = pos;
			free(hold);
			return (1);
		}
	return (-1);
}
