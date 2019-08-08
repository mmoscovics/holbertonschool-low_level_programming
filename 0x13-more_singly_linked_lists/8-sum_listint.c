#include "lists.h"

/**
 * sum_listint - tested function, returns sum of all data (n) in list
 *@head: pointer to beginning of list
 * Return: sum of all data (n)
 */
int sum_listint(listint_t *head)
{
	int sum;
	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
