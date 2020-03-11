#include "holberton.h"
#include <stdlib.h>

/**
 * int_index - Entry point
 *
 * @array: set of values
 * @size: array
 * @cmp: function
 *
 * Return: Always 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j = 0;

	if (size <= 0)
		return (-1);
	if (cmp == NULL || array == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j != 0)
		{
			return (i);
		}
	}
	return (-1);
}
