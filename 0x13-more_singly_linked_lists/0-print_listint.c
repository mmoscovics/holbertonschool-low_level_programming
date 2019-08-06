#include "lists.h"

/**
 * print_listint - tested function, prints all the elements of a list
 *@h: pointer to a struct
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int iter;

	for (iter = 0; h != NULL; iter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (iter);
}
