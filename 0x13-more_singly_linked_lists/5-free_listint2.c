#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - separates a joined list
 * @head: head node's pointer
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)  /* If head is NULL, there's nothing to free. */
	return;

	current = *head;   /* Set current to point to the head of the list. */

	while (current != NULL)

	{
		next = current->next;  /* Store the pointer to the next node. */
		free(current);         /* Free the current node. */
		current = next;        /* Move to the next node. */
	}

	*head = NULL;  /* Set head to NULL, since the list is now empty. */
}
