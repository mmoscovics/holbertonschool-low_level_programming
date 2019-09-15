#include "lists.h"

/**
 * dlistint_len - tested function, returns number of elements in list
 * @h: pointer to a struct
 * Return: number of elements in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
