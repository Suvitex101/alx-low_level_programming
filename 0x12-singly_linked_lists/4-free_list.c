#include "lists.h"

/**
 * free_list - frees a list
 * @head: linked list head
 * Return: return 0
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head->next);
	free(head->str);
	free(head);
}
