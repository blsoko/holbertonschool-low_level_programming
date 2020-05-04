#include "lists.h"

/**
 * deleteNode - remove the head at the end linked list
 *
 * @head: Header
 * @vector: index
 *
 * Return: 1 if succed or -1 if its wrong
 */
int deleteNode(dlistint_t **head, dlistint_t *vector)
{
	if (*head == NULL || vector == NULL)
		return (-1);
	if (*head == vector)
		*head = vector->next;
	if (vector->next != NULL)
		(vector->next)->prev = vector->prev;
	if (vector->prev != NULL)
		(vector->prev)->next = vector->next;
	free(vector);
	return (1);
}
/**
 * delete_dnodeint_at_index - remove the head at the end linked list
 *
 * @head: Header
 * @index: index
 *
 * Return: The position of the last add node, or null if fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *vector;
	int value = 0;

	if (head == NULL)
		return (-1);
	vector = *head;
	/*go to the pos*/
	for (i = 0; vector != NULL && i < index; i++)
	{
		vector = vector->next;
	}
	if (vector == NULL)
		return (-1);
	value = deleteNode(head, vector);
	if (value == 1)
		return (1);
	return (-1);
}
