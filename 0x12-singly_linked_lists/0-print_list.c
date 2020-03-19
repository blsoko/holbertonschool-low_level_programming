#include "lists.h"

/**
 * print_list - print elements and values
 *
 * @h: value
 *
 * Return: Number of nodes (Success)
 */

size_t print_list(const list_t *h)
{
	size_t elements = 0; /* Data type */

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
	h = h->next;
	elements++;
	}
	return (elements);
}
