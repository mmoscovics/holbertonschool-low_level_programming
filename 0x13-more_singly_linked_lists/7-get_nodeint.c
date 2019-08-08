#include "lists.h"

/**
 * get_nodeint_at_index - tested function, returns the nth node of a list
 *@head: pointer to beginning of list
 *@index: index of the node starting at 0
 * Return: nth node
 * or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iter;

	if (head->next == NULL)
		return (NULL);
	for (iter = 0; head != NULL; iter++, head = head->next)
		if (iter == index)
			return (head);
	return (NULL);
}
