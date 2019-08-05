#include "lists.h"

/**
 * list_len - tested function, returns number of elemets of a linked list
 *@h: pointer to a struct
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int iter;

	for (iter = 0; h != NULL; iter++)
		h = h->next;
	return (iter);
}
