#include "lists.h"

/**
 *reverse_listint - function that reverses a listint_t linked list
 *@head: pointer to the head node
 *Return: pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *top = NULL, *down = NULL;

	while (*head != NULL)
	{
		down = (*head)->next;
		(*head)->next = top;
		top = *head;
		*head = down;
	}
	*head = top;
	return (*head);
}
