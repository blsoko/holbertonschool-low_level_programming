#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - free memory
 *
 * @ptr: array size
 * @old_size: array size
 * @new_size: value
 *
 * Return: Always 0 (Success)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int ite;
	char *vector = 0;

	if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	vector = malloc(new_size);
	if (vector == NULL)
	{
		free(vector);
		return (NULL);
	}
	else if (ptr == NULL)
		return (vector);
	for (ite = 0; ite < old_size; ite++)
	{
		vector[ite] = ((char *)ptr)[ite];
	}
	free(ptr);
	return (vector);
}
