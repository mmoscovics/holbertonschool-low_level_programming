#include "lists.h"

/**
 * add_nodeint - tested function, adds new node at beginning of a list
 *@head: pointer to first node
 *@n: passed number
 * Return: address of new element
 * or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
