#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Entry point
 *
 * @nmemb: value
 * @size: value
 *
 * Return: Always 0 (Success)
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int j;
	char *vector;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	vector = malloc(nmemb * size);
	if (vector == NULL)
	{
		free(vector);
		return (NULL);
	}
	for (j = 0; j < (size * nmemb); j++)
	{
		vector[j] = '0';
	}
	return (vector);
}
