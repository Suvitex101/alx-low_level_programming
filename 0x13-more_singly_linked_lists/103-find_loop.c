#include "lists.h"

/**
 *find_listint_loop - function that finds the loop in a linked list
 *@head: pointer to the head node
 *Return: address of the node where the loop starts or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *up, *down;

	if (head == NULL || head->next == NULL)
		return (NULL);

	up = head->next;
	down = (head->next)->next;

	while (down)
	{
		if (up == down)
		{
			up = down;
			while (up != down)
			{
				up = up->next;
				down = down->next;
			}
			return (up);
		}
		up = up->next;
		down = (down->next)->next;
	}

	return (NULL);
}
