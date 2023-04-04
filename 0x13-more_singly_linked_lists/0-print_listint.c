#include "lists.h"

/**
 *print_listint - prints all the elements of a list
 *@h: head of the linked list
 *Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t new = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		new++;
	}

	return (new);
}
