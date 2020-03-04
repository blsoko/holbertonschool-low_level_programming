#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * liss - Longitud
 *
 * @number: value
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

/**
 * argstostr - Entry point
 * @ac: account
 * @av: value
 *
 * Return: An argument with jump line
 */

char *argstostr(int ac, char **av)
{
	int i, j = 0, k = 0; /*iterator*/
	char *vector;
	int size = 0; /*total size*/

	if (ac == 0 || av[0] == NULL)
	{
		return (NULL);
	}
	/*size of the array*/
	for (i = 0; i < ac; i++)
	{
		size += liss(av[i]);
		size++; /*line jump*/
	}
	size++;

	vector = malloc(size * sizeof(char));
	if (vector == NULL)
	{
		free(vector);
		return (NULL);
	}
	/*creating the string*/
	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			vector[j] = av[i][k];
			if (vector == NULL)
			{
			return (NULL);
			}
			j++;
		}
		vector[j] = '\n';
		j++;
	}
	vector[j + 1] = '\0';
	return (vector);
}
