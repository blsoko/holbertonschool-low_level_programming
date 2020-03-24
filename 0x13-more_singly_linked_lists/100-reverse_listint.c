#include "lists.h"

/**
 * reverse_listint - free list
 *
 * @head: Header
 *
 * Return: The newest node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	if (head == NULL)
	{
		return (NULL);
	}
	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}
