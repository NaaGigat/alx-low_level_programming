#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the listint_t list
 * @head: head node's pointer
 * @n: a integer
 * Return: address of the new element, or NULL if unsuccessful
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Allocation of  memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
	return (NULL);
	}

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = *head;

	/* Update the head pointer */
	*head = new_node;

	return (new_node);
}
