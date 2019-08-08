#include "lists.h"

listint_t *addnode(listint_t **head, int n);

/**
 * insert_node_at_index - tested function, insert a new node at given position
 *@head: pointer to beginning of list
 *@idx: index where new node should be added
 *@n: data passed for new node
 * Return: addess of the new node
 * or NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int iter;
	listint_t *new, *temp = *head;

	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	for (iter = 0; temp; iter++, temp = temp->next)
		if (iter == (idx - 1))
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
	return (NULL);
}
