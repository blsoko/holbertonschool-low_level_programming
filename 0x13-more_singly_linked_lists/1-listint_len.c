#include "lists.h"

/**
 * listint_len - takes length linked list
 *
 * @h: Header
 *
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t iterator = 0;

	while (h != NULL)
	{
		iterator++;
		h = h->next;
	}
	return (iterator);
}
