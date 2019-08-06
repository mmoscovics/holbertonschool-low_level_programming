#include "lists.h"

/**
 * add_nodeint_end - tested function, adds a new node at the end of a list
 *@head: pointer to first node
 *@n: number passed
 * Return: address of new element
 * or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *start;

	start = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (start->next != NULL)
		start = start->next;
	start->next = new;
	return (new);
}
