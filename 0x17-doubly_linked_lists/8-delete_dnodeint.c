#include "lists.h"

/**
 * delete_dnodeint_at_index - remove the head at the end linked list
 *
 * @head: Header
 * @index: index
 *
 * Return: The position of the last add node, or null if fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *vector, *reference;
	unsigned int iterator = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	vector = *head;
	if (index == 0)
	{
		*head = vector->next;
		free(vector);
		return (1);
	}
	for (iterator = 0; vector != NULL && iterator < index - 1; iterator++)
	{
		vector = vector->next;
	}

	if (vector == NULL || vector->next == NULL)
	{
		return (-1);
	}
	reference = vector->next->next;
	free(vector->next);
	vector->next = reference;
	return (1);
}
