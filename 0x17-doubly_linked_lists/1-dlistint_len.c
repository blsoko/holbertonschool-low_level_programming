#include "lists.h"

/**
 * dlistint_len - print list
 *
 * @h: head
 *
 * Return: contador
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t contador = 0;

	while (h != NULL)
	{
		contador++;
		h = h->next;
	}
	return (contador);
}
