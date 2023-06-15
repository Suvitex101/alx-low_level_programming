#include "lists.h"
/**
  * dlistint_len - returns number of elements in doubly linked list.
  * @h: ponter to head node of list.
  *
  * Return: number of elements in list.
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1, *h2;
	unsigned int b;

	h1 = *head;

	if (h1)
		while (h1->prev != NULL)
			h1 = h1->prev;

	b = 0;

	while (h1 != NULL)
	{
		if (b == index)
		{
			if (b == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;

				if (h1->next != NULL)
					h1->next->prev = h2;
			}

			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		b++;
	}

	return (-1);
}
