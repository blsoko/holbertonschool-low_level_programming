#include "lists.h"

/**
 * free_list - Prints elements
 *
 * @head: head linked list
 *
 * Return: Number of nodes (Success)
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
	free(head);
}
