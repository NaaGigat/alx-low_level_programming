#include "lists.h"

/**
 * sum_listint - determines the sum of all the data of a joined list
 * @head: the list's firt node's pointer
 * Return: sum of all the data (n) of the list, or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node != NULL)

	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
