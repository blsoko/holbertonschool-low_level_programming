#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copy a string to string
 *
 * @str: string to copy
 *
 * Return: vector
 */

char *_strdup(char *str)
{
	int ite; /*iterator*/
	char *vector;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (ite = 0; str[ite]; ite++)
	{
		size++;
	}
	size += 1;
	vector = malloc(size * sizeof(char));
	if (vector == NULL)
	{
		return (NULL);
	}
	for (ite = 0; ite < size; ite++)
	{
		*(vector + ite) = *(str + ite);
	}
	*(vector + ite) = '\0';
	return (vector);
}
