#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Entry point
 *
 * @s1: value
 * @s2: value
 * @n: value
 *
 * Return: Always 0 (Success)
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *vector;
	int i, k; /*iterator*/
	unsigned int x, j;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	for (i = 0; s1 && s1[i]; i++)
	{
	}
	for (j = 0; s2 && s2[j]; j++)
	{
	}
	vector = malloc((i + n + 1) * sizeof(char));
	if (vector == NULL)
	{
		free(vector);
		return (NULL);
	}
	for (k = 0; s1[k]; k++)
	{
		vector[k] = s1[k];
	}
	for (x = 0; x < n && x < j ; x++)
	{
		vector[k] = s2[x];
		k++;
	}
	vector[k] = '\0';
	return (vector);
}
