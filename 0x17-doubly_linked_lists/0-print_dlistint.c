#include "lists.h"

/**
 * print_dlistint - print list
 *
 * @h: head
 *
 * Return: contador
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t contador = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		contador++;
		h = h->next;
	}
	return (contador);
}
