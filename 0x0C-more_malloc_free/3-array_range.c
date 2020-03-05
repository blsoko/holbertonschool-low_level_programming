#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Entry point
 *
 * @min: value
 * @max: value
 *
 * Return: Always 0 (Success)
 */

int *array_range(int min, int max)
{
	int resta = 0, cont = 0;
	int *vector;

	if (min > max)
		return (NULL);
	resta = max - min;
	resta++;
	vector = malloc(sizeof(int) * resta);
	if (vector == NULL)
		return (NULL);
	for (resta = min; resta <= max; resta++)
	{
		vector[cont] = resta;
		cont++;
	}
	return (vector);
}

