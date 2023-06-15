#include "lists.h"

/**
 * print_dlistint - prints all the elements
 * dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int sum;

	sum = 0;

	if (h == NULL)
		return (sum);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		sum++;
		h = h->next;
	}

	return (sum);
}
