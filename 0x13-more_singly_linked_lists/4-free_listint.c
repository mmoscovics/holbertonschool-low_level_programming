#include "lists.h"

/**
 * free_listint - tested function, frees a list
 *@head: pointer to first node
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (temp)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}
