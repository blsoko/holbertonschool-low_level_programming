#include "lists.h"

/**
 * free_listint2 - free list
 *
 * @head: Header
 *
 * Return: The newest node
 */

void free_listint2(listint_t **head)
{
	listint_t *vector;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		vector = *head;
		*head = (*(head))->next;
		free(vector);
	}
}
