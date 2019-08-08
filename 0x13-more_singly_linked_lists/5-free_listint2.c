#include "lists.h"

/**
 * free_listint2 - tested function, frees a list
 *@head: pointer to first node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (head && *head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
