#include "lists.h"

/**
  * free_dlistint - frees a doubly linked list.
  * @head: ponter to the list.
  *
  * Return: VOID.
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head)
		while (head->prev != NULL)
			head = head->prev;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
