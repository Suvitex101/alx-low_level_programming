#include "lists.h"
/**
 * list_len - returns the number of elements
 * @h: singly linked list
 * Return: elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t move;

	move = 0;

	while (h != NULL)
	{
		h = h->next;
		move++;
	}
	return (move);

}
