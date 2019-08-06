#include "lists.h"

/**
 * add_node - tested function, add a new node at the beggining of a list
 *@head: pointer to first node
 *@str: string
 * Return: address of new element
 * or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new;

	for (len = 0; str[len] != '\0'; len++)
		;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
