#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
