#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: Header
 *
 * Return: The newest node
 */

void free_listint(listint_t *head)
{
	listint_t *vector;

	while (head != NULL)
	{
		vector = head;
		head = head->next;
		free(vector);
	}
	free(head);
}
