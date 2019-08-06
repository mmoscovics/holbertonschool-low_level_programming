#include "lists.h"

/**
 * listint_len - tested function, returns number of elements in a list
 *@h: pointer to a struct
 * Return: number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	int iter;

	for (iter = 0; h != NULL; iter++)
		h = h->next;
	return (iter);
}
