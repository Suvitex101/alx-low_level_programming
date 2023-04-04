#include "lists.h"

/**
 *add_nodeint - adds a new node at the beginning
 *@head: pointer to the head of the list
 *@n: data to be stored
 *Return: the address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeNew;

	nodeNew = malloc(sizeof(listint_t));

	if (!nodeNew)
		return (NULL);

	nodeNew->n = n;
	nodeNew->next  = *head;

	*head = nodeNew;

	return (nodeNew);

}
