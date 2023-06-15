#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts new node at a given position.
  * @h: double pointer to head node of d-list.
  * @idx: position to add new node.
  * @n: data to add to new node.
  *
  * Return: address of new node or NULL
  * om failure.
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head;
	unsigned int b;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;
		b = 1;
		if (head)
			while (head->prev)
				head = head->prev;
		while (head)
		{
			if (b == idx)
			{
				if (head->next)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			b++;
		}
	}

	return (new);
}
