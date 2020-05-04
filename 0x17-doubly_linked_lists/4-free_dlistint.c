#include "lists.h"

/**
 * free_dlistint - print list
 *
 * @head: head
 *
 * Return: contador
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *vector;

	while (head != NULL)
	{
		vector = head;
		head = head->next;
		free(vector);
	}
	free(head);
}
