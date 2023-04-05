#include "lists.h"

/**
 * listint_len - number of elements to be returned in a linked list
 * @h: head node's pointer
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
