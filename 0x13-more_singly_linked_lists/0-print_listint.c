#include "lists.h"

/**
 *print_listint - prints all the elements of a list
 *@h: head of the linked list
 *Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t new;

	for (new = 0; h; new++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (new);
}
