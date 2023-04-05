#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: head node's pointer
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
