#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * memoryass - entry point, asign value memory and count
 *
 * @str: check value
 * @m: array cvalue
 *
 *
 * Return: height n point blab
 */
int memoryass(char *str, int *m)
{
	int contador = 0;
	int i = 0;
	int j = 0;
	int height = 0;

	while (str[i] != '\0')
	{
	if (str[i] != ' ')
	{
		contador = 0;
		while (str[i] != ' ')
		{
			contador++;
			i++;
		}
		contador++;
		m[j] = contador;
		height++;
		j++;
	}
	else
		i++;
	}
	return (height);
}

/**
 * strtow - Entry point
 *
 * @str: value
 *
 * Return: An argument with jump line
 */

char **strtow(char *str)
{
	int k = 0, i = 0, j = 0, height = 0, m[100]; /*iterator*/
	char **vector;

	if (str == NULL || *str == '\0')
		return (NULL);
	height = memoryass(str, m);
	vector = malloc(height * sizeof(char *));
	if (vector == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		vector[i] = malloc(m[j] * sizeof(char));
		if (vector[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(vector[i]);
			}
			free(vector);
			return (NULL);	}
		j++;	}
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			k = 0;
			while (str[i] != ' ')
			{
				vector[j][k] = str[i];
				k++;
				i++;
			}
			vector[j][k] = '\0';
			j++;	}
		else
			i++;	}
	vector[j] = NULL;
	return (vector);
}
