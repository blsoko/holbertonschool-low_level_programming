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
	unsigned int iterator = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	vector = malloc(sizeof(dlistint_t));
	if (vector == NULL)
	{
		return (NULL);
	}
	vector->n = n;
	vector->next = NULL;
	if (idx == 0)
	{
		vector->next = *h;
		*h = vector;
		return (vector);
	}
	reference = *h;
	for (iterator = 0; reference != NULL ; iterator++)
	{
		if (iterator == (idx - 1))
		{
			vector->next = reference->next;
			reference->next = vector;
			return (vector);
		}
		reference = reference->next;
	}
	return (NULL);
}
