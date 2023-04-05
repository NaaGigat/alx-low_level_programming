#include "lists.h"

/**
 * pop_listint - eliminates the head node of a linked list
 * @head: head node's double pointer
 * Return: the data (n) of the head node that was eliminated
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)

	{
	return (0);
	}

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
