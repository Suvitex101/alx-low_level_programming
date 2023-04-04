#include "lists.h"

/**
 *delete_nodeint_at_index - function that deletes the node at index
 *@head: pointer to the head node
 *@index: the index of the node that should be deleted
 *Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nodeNew, *fix;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	nodeNew = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(nodeNew);
		return (1);

	}

	for (i = 0; i < index && nodeNew != NULL; i++)
	{
		fix = nodeNew;
		nodeNew = nodeNew->next;
	}
	if (!nodeNew)
		return (-1);
	fix->next = nodeNew->next;
	free(nodeNew);
	return (1);
}
