#include "lists.h"

/**
 *listint_len - returns the number of elements in a linked list
 *@h: pointer to the list.
 *Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t number;

	number = 0;

	while (h)
	{
		h = h->next;
		number++;
	}

	return (number);

}
