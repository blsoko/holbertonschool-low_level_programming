#include "holberton.h"
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Entry point
 *
 * @array: value
 * @size: size
 * @action: value
 *
 * Return: Always 0 (Success)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0 || action == NULL || array == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
