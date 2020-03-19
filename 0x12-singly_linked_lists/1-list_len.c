#include "lists.h"

/**
 * list_len - Prints elements
 *
 * @h: head linked list
 *
 * Return: Number of nodes (Success)
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0; /* Data type */

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
