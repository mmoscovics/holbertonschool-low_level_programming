#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: header of the linked list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
  int i;

  for (i= 0; h != NULL; i++, h = h->next)
    printf("%d\n", h->n);
  return (i);
}
