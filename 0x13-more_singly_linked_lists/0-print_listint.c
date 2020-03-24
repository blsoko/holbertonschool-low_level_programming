#include "lists.h"

/**
 * print_listint - print linked list
 *
 * @h: Header
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t iterator = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		iterator++;
		h = h->next;
	}
	return (iterator);
}
