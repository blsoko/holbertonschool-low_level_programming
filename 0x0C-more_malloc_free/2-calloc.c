#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Entry point
 *
 * @nmemb: Value
 * @size: Value
 *
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *vector;

	if (nmemb == 0 || size == 0)
		return (NULL);
	vector = malloc(nmemb * size);
	if (vector == NULL)
		return (NULL);
	return (vector);
}
