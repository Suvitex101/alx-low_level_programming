#include "lists.h"

/**
 *sum_listint - the sum of all the data in a list
 *@head: pointer to head node
 *Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	for (; head != NULL; head = head->next)
	{

		total += head->n;
	}
	return (total);
}
