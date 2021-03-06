#include "lists.h"

/**
 * add_dnodeint_end - add new node at end of a doubly linked list
 * @head: pointer to start of linked list
 * @n: int value of node
 * Return: address of new element or NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *pos = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (pos && pos->next)
		pos = pos->next;
	new->prev = pos;
	if (pos)
		pos->next = new;
	return (new);
}
