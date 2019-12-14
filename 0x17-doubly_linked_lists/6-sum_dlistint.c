#include "lists.h"

/**
 * sum_dlistint - returns sum of all data of a doubly linked list
 * @head: pointer to start of linked list
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *pos = head;

	for (; pos; pos = pos->next)
		total += pos->n;
	return (total);
}
