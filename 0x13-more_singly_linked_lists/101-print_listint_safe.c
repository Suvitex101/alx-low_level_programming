#include "lists.h"


size_t help_listint_safe(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 *help_listint_safe - Counts the number of special nodes
 *@head: pointer to the head node
 *Return: return 0
 */

size_t help_listint_safe(const listint_t *head)
{
	const listint_t *cat, *hare;
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
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to the head list
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t niyi, count = 0;

	niyi = help_listint_safe(head);

	if (niyi == 0)
	{
		for (; head != NULL; niyi++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (count = 0; count < niyi; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (niyi);
}
