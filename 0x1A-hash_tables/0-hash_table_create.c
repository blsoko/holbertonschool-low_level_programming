#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 *
 * @size: size of the hash
 *
 * Return: pointer to the newly created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int count;
	hash_table_t *vector;

	vector = malloc(sizeof(hash_table_t));
	if (vector == NULL)
		return (NULL);
	vector->size = size;
	vector->array = malloc(size * sizeof(hash_node_t));
	if (vector->array == NULL)
		return (NULL);
	for (count = 0; count < size; )
		(vector->array)[count] = NULL;
	return (vector);
}
