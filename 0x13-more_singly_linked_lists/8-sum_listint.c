#include "lists.h"

/**
 * sum_listint - remove the head at the end linked list
 *
 * @head: Header
 *
 * Return: The newest node
 */

int sum_listint(listint_t *head)
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
