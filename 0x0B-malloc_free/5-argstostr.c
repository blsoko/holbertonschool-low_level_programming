#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Entry point
 *
 * @ac: 
 *
 *
 * Return: Always 0 (Success)
 */

char liss(char *number)
{
	int i = 0;
	while (number[i] != '\0')
	{
		i++;
	}
	return (i);
}


char *argstostr(int ac, char **av)
{
	int i, j, k, law = 0; /*iterator*/
	char *vector;
	int size = 0;

	if (ac == 0 || av[0] == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		size += liss(av[i]);
		size++;
	}
	size++;

	vector = malloc(size * sizeof(char));
	if (vector == NULL)
	{
		return (0);
	}
	for (j = 0; j < ac; j++)
	{
		law = law + k;
		for (k = 0; av[k]; k++)
		{
			vector[law + k] = av[j][k];
		}
		vector[law + k] = '\n';
	}
	vector[law] = '\0';
	return (vector);
}
