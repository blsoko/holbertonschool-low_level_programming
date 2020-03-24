#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end linked list
 *
 * @head: Header
 * @n: Number to add
 *
 * Return: The newest node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *vector, *reference;

	vector = malloc(sizeof(listint_t));
	if (vector == NULL)
	{
		return (NULL);
	}
	vector->n = n;
	vector->next = 0;
	if (*head == NULL)
	{
		*head = vector;
	}
	else
	{
		reference = *head;
		while (reference->next != NULL)
		{
			reference = reference->next;
		}
		reference->next = vector;
	}
	return (vector);
}
