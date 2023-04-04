#include "lists.h"

/**
 *free_listint - function that frees a list
 *@head: pointer to the head list
 */

void free_listint(listint_t *head)
{
	listint_t *nodeFree;

	while (head)
	{
		nodeFree = head->next;
		free(head);
		head = nodeFree;
	}

}
