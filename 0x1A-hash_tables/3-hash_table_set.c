#include "hash_tables.h"

/**
 * add_nodeint - add a new node at the beginning linked list
 *
 * @head: Header
 * @key: Number to add
 * @value: add value
 *
 * Return: The newest node
 */

hash_node_t *add_nodeint(hash_node_t **head, const char *key,
const char *value)
{
	hash_node_t *vector;

	vector = malloc(sizeof(hash_node_t));
	if (vector == NULL)
	{
		return (NULL);
	}
	while (*head != NULL)
	{
		if (strcmp((*head)->key, key) == 0)
		{
			free((*head)->value);
			(*head)->value = strdup(value);
			return (*head);
		}
	}
	vector = (*head);
	vector = malloc(sizeof(hash_node_t));
	if (vector == NULL)
		return (NULL);
	vector->value = strdup(value);
	vector->key = strdup(key);
	vector->next = *head;
	*head = vector;
	return (vector);
}

/**
 * hash_table_set - implementation of the djb2 algorithm
 *
 * @ht: hash table head
 * @key: index
 * @value: value of data
 *
 * Return: hash value
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if ((add_nodeint(&ht->array[index], key, value)) == NULL)
	{
		return (0);
	}
	return (1);
}
