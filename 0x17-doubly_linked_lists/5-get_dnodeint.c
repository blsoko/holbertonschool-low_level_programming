#include "lists.h"

/**
 * get_dnodeint_at_index - print list
 *
 * @head: head
 * @index: position
 *
 * Return: head in the position of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
