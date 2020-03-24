#include "lists.h"

/**
 * insert_nodeint_at_index - remove the head at the end linked list
 *
 * @head: Header
 * @idx: index
 * @n: number to add
 *
 * Return: The position of the last add node, or null if fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *vector, *reference;
	unsigned int iterator = 0;

	if (*head == NULL)
	{
		return (NULL);
	}
	vector = malloc(sizeof(listint_t));
	if (vector == NULL)
	{
		return (NULL);
	}
	vector->n = n;
	vector->next = NULL;
	if (idx == 0)
	{
		vector->next = *head;
		*head = vector;
		return (vector);
	}
	reference = *head;
	while (reference != NULL)
	{
		if (iterator == (idx - 1))
		{
			vector->next = reference->next;
			reference->next = vector;
			return (vector);
		}
	reference = reference->next;
	iterator++;
	}
	vector->next = reference->next;
	reference->next = vector;
	return (NULL);
}
