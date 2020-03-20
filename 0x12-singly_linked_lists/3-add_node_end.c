#include "lists.h"

/**
 * add_node_end - Prints elements
 *
 * @head: head linked list
 * @str: string
 *
 * Return: Number of nodes (Success)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int index;
	list_t *vector, *reference;

	vector = malloc(sizeof(list_t));
	if (vector == NULL)
		return (NULL);
	if (str == NULL)
		vector->str = NULL;
	else
	{
		vector->str = strdup(str);
	}
	for (index = 0; str[index] != '\0' ; index++)
	;
	vector->len = index;
	vector->next = 0;
	if (*head == NULL)
	{
		*head = vector;
	}
	else
	{
		reference = *head;
		while (reference->next != NULL)
		{
			reference = reference->next;
		}
		reference->next = vector;
	}
	return (vector);
}
