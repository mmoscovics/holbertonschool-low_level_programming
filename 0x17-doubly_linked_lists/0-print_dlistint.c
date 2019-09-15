#include "lists.h"

/**
 * print_dlistint - tested function, prints all elements of a list
 * @h: element of list
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
