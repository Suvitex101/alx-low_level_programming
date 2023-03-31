#include "lists.h"
/**
 * add_node - adds a new node
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t move;

	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);

	for (move = 0; str[move]; move++)
		;


	new_node->len = move;
	new_node->next = *head;
	*head = new_node;

	return (*head);

}
