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
	int **grid;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (ite = 0; ite < height; ite++)
	{
		grid[ite] = malloc(width * sizeof(int));
		if (grid[ite] == NULL)
		{
			for (ite = 0; ite < height; ite++)
			{
				free(grid[ite]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (ite = 0; ite < height; ite++)
	{
		grid[ite][ite] = 0;
	}
	return (grid);
}
