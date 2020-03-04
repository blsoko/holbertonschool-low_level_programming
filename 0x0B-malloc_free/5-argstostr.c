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
		return (NULL);
	}
	/*creating the string*/
	for (i = 0; i < ac; i++)
	{
		while (av[i][k] != '\0')
		{
			if (av[i][k] == ' ')
			{
				vector[j] = ' ';
				vector[j + 1] = '\n';
				j += 2;
				break;
			}
			vector[j] = av[i][k];
			j++;
			if (vector == NULL)
			{
				return (NULL);
			}
			else
			{
				k++;
			}
		}
		k = 0;
	}
	vector[j] = '\0';
	return (vector);
}
