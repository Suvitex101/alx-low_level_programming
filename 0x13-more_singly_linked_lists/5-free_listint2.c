#include "lists.h"

/**
 *free_listint2 - function that frees a listint_t list
 *@head: pointer to the head list
 */

void free_listint2(listint_t **head)
{
	listint_t *nodeFree;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		nodeFree = *head;
		*head = (*head)->next;
		free(nodeFree);
	}
	*head = NULL;
}
