#include "lists.h"

/**
 * add_node - Prints elements
 *
 * @head: head linked list
 * @str: string
 *
 * Return: Number of nodes (Success)
 */

list_t *add_node(list_t **head, const char *str)
{
	int index;
	list_t *vector;

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
	{
	}
	vector->len = index;
	vector->next = *head;
	*head = vector;
	return (vector);
}
