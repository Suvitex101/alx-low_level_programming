#include "lists.h"

/**
 *free_listint_safe - frees a listint_t linked list
 *@h: pointer to the head node
 *Return: the size of the list that was free
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *upper;
	size_t sum;

	while (*h)
	{
		sum++;

		if (*h <= (*h)->next)
		{
			free(*h);
			break;
		}
		upper = (*h)->next;
		free(*h);
		*h = upper;
	}
	*h = NULL;

	return (sum);

}
