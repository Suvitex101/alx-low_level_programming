#include "lists.h"

/**
 *free_listint_safe - frees a listint_t linked list
 *@h: pointer to the head node
 *Return: the size of the list that was free
 */

size_t free_listint_safe(listint_t **h)
{
	int ahead;
	listint_t *nodeNew;
	size_t count = 0;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		ahead = *h - (*h)->next;
		if (ahead > 0)
		{
			nodeNew = (*h)->next;
			*h = nodeNew;
			count++;
		}
		else
		{
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
