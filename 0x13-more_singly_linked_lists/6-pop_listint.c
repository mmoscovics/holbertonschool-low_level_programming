#include "lists.h"

/**
 * pop_listint - tested function, deletes the head node of a list
 *@head: pointer to first node
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head && *head == NULL)
		return (0);
	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (data);
}
