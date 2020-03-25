#include "lists.h"

/**
 * print_listint_safe - free list
 *
 * @head: Header
 *
 * Return: The newest node
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t iterator = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		iterator++;
		if (head - (head->next) > 0)
		{
			printf("[%p] %d\n", (void *)head, head->n);
		}
		else
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			break;
		}
		head = head->next;
	}
	return (iterator);
}
