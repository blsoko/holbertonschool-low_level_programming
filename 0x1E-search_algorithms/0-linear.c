#include "search_algos.h"

/**
 * linear_search - searching
 *
 * @array: set of positions
 * @size: array's array
 * @value: array's value
 *
 * Return: head in the position of the node
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		else
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}
