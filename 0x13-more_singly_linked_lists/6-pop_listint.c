#include "lists.h"

/**
 * pop_listint - remove the head at the end linked list
 *
 * @head: Header
 *
 * Return: The newest node
 */

int pop_listint(listint_t **head)
{
	if (*head != NULL)
	{
	listint_t *vector;
	int reserva = 0;

	vector = *head;
	reserva = vector->n;
	*head = vector->next;
	free(vector);
	return (reserva);
	}
	else
	{
		return (0);
	}
}
