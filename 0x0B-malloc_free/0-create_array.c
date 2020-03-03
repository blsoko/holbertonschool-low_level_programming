#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to alocate char in array
 *
 * @size: array len
 * @c: character
 *
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	char *pt;
	unsigned int ite; /*Iterador*/

	pt = malloc(size * sizeof(int));
	if (pt == NULL || size == 0)
		return (NULL);
	for (ite = 0; ite < size; ite++)
		*(pt + ite) = c;
	return (pt);
}