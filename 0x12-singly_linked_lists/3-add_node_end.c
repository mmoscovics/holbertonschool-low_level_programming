#include "lists.h"

/**
 * add_node_end - tested function, adds a new node at end of list
 *@head: pointer to the first node
 *@str: string
 * Return: address of new element
 * or Null if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new;
	list_t *head2;

	head2 = *head;
	for (len = 0; str[len] != '\0'; len++)
		;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (head == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (head2->next != NULL)
	{
		head2 = head2->next;
	}
	head2->next = new;
	return (new);
}
