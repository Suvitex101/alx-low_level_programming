#include "lists.h"

/**
  * sum_dlistint - returns sum of all data in a doubly linked list.
  * @head: pointer to head of d-list.
  *
  * Return: SUM or ) if list is empty.
  */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
