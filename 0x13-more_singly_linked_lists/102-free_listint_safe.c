#include "lists.h"

size_t help_listint_safe_me(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 *help_listint_safe_me - Counts the number of special nodes
 *@head: pointer to the head node
 *Return: return 0
 */

size_t help_listint_safe_me(listint_t *head)
{
	listint_t *cat, *hare;
	size_t run = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	cat = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (cat == hare)
		{
			cat = head;
			while (cat != hare)
			{
				run++;
				cat = cat->next;
				hare = hare->next;
			}

			cat = cat->next;
			while (cat != hare)
			{
				run++;
				cat = cat->next;
			}

			return (run);
		}

		cat = cat->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 *free_listint_safe - function that frees a link list.
 *@h: pointer to the head of the list
 *Return: the size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *upper;
	size_t count, a;

	count = help_listint_safe_me(*h);

	if (count == 0)
	{
		for (; h != NULL && *h != NULL; count++)
		{
			upper = (*h)->next;
			free(*h);
			*h = upper;
		}
	}

	else
	{
		for (a = 0; a < count; a++)
		{
			upper = (*h)->next;
			free(*h);
			*h = upper;
		}

		*h = NULL;
	}

	h = NULL;

	return (count);
}
