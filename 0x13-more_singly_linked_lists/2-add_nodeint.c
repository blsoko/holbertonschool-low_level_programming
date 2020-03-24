#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning linked list
 *
 * @head: Header
 * @n: Number to add
 *
 * Return: The newest node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *vector;

	vector = malloc(sizeof(listint_t));
	if (vector == NULL)
	{
		return (NULL);
	}
	vector->n = n;
	vector->next = *head;
	*head = vector;
	return (vector);
}
