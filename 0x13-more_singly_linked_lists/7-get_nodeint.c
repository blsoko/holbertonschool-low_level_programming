#include "lists.h"

/**
 * get_nodeint_at_index - remove the head at the end linked list
 *
 * @head: Header
 * @index: Number to add
 *
 * Return: The newest node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
