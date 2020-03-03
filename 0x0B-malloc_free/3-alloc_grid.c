#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - result a grid
 *
 * @width: array size
 * @height: array size
 *
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{
	int ite;
	int kte;
	int **grid;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	grid = malloc(width * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (ite = 0; ite < width; ite++)
	{
		grid[ite] = malloc(height * sizeof(int));
		if (grid[ite] == NULL)
		{
			return (NULL);
		}
	}

	for (ite = 0; ite < width; ite++)
	{
		for (kte = 0; kte < height; kte++)
		{
			grid[ite][kte] = 0;
			if (grid[ite] == NULL)
			{
				return (NULL);
			}
		}
	}

	return (grid);
}
