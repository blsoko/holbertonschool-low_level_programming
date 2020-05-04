#include "lists.h"

/**
 * insert_dnodeint_at_index - print list
 *
 * @h: head
 * @idx: position
 * @n: number to add
 *
 * Return: the inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *vector, *reference;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	vector = malloc(sizeof(dlistint_t));
	if (vector == NULL)
		return (NULL);
	vector->n = n;
	if (idx == 0)
	{
		vector->next = *h;
		vector->prev = NULL;
		if (*h != NULL)
			(*h)->prev = vector;
		*h = vector;
		return (vector);
	}
	free(vector);
	vector = *h;
	i = 0;
	while (i < idx - 1 && vector != NULL)
	{
		vector = vector->next;
		i++;
	}
	reference = NULL;
	if (vector != NULL)
	{
		reference = malloc(sizeof(dlistint_t));
		if (reference == NULL)
			return (NULL);
		reference->n = n;
		reference->next = vector->next;
		reference->prev = vector;
		if (vector->next != NULL)
			(vector->next)->prev = reference;
		vector->next = reference;
	}
	return (reference);
}
