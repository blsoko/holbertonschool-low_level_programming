#include "lists.h"

/**
 * add_dnodeint_end - print list
 *
 * @head: head
 * @n: n to add
 *
 * Return: double list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *vector, *reference;

	vector = malloc(sizeof(dlistint_t));
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
		vector->prev = reference;
		vector->next = NULL;
	}
	return (vector);
}
