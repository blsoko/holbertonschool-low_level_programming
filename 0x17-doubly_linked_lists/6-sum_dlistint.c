#include "lists.h"

/**
 * sum_dlistint - remove the head at the end linked list
 *
 * @head: Header
 *
 * Return: Sum of the nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	else
	{
		return (0);
	}
}
