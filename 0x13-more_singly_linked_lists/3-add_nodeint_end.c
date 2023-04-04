#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@n: data to be stored in the list
 *Return: address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodeNew, *tmp;

	nodeNew = malloc(sizeof(listint_t));

	if (!nodeNew)
		return (NULL);

	nodeNew->n = n;
	nodeNew->next = NULL;

	if (*head == NULL)
		*head = nodeNew;

	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = nodeNew;

	}


	return (*head);

}
