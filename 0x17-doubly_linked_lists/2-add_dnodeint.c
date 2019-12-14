#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of doubly linked list
 * @head: pointer to head of linked list
 * @n: int value in node
 * Return: address of new element of NULL if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head)
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
		return (new);
	}
	*head = new;
	return (*head);
}
