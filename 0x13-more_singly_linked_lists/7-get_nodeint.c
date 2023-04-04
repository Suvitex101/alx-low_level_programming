#include "lists.h"

/**
 *get_nodeint_at_index - function that returns the nth node
 *@head: pointer to the head node of the list
 *@index: the index of the node, starting at 0
 *Return: nth node located.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nthNode;

	for (nthNode = 0; nthNode < index; nthNode++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
