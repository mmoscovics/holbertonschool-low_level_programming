#include "lists.h"

/**
 * print_list - tested function, prints all elements of a list
 *@h: pointer to a struct
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int iter;

	for (iter = 0; h != NULL; iter++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (iter);
}
