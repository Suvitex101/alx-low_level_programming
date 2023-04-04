#include "lists.h"

/**
 *insert_nodeint_at_index -  function that inserts a new node
 *@head: pointer to the head node
 *@idx: index of the list where the new node should be added
 *@n: data to be stored in the node
 *Return: the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nodeNew, *fix;
	unsigned int index;

	if (!head)
		return (NULL);

	nodeNew = malloc(sizeof(listint_t));

	if (!nodeNew)
		return (NULL);

	nodeNew->n = n;

	if (idx == 0)
	{
		nodeNew->next = *head;
		*head = nodeNew;
		return (nodeNew);
	}

	fix = *head;

	for (index = 0; index < idx && fix != NULL; index++)
	{
		fix = fix->next;
	}

	if (!fix)
	{
		free(nodeNew);
		return (NULL);

	}

	nodeNew->next = fix->next;
	fix->next = nodeNew;

	return (nodeNew);

}
