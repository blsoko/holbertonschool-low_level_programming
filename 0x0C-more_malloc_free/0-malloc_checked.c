#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Entry point
 *
 * @b: value
 *
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b)
{
	void *vector;

	vector = malloc(b);
	if (vector == NULL)
		exit(98);
	return (vector);
}
