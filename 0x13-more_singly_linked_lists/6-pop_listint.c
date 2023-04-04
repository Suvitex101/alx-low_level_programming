#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *@head: pointer to the head node
 *Return: the head node’s data
 */

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int num;

	if (*head == NULL)
		return (0);

	pop = *head;
	num = pop->n;
	*head = (*head)->next;

	free(pop);

	return (num);

}
