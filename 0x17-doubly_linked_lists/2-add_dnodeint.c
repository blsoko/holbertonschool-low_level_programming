#include "lists.h"

/**
 * add_dnodeint - print list
 *
 * @head: head
 * @n: n to add
 *
 * Return: double list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *vector;

	vector = malloc(sizeof(dlistint_t));
	if (vector == NULL)
	{
		return (NULL);
	}
	vector->n = n;
	vector->next = *head;
	vector->prev = NULL;
	*head = vector;
	return (vector);
}
