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
	int size = 0;
	char *grid;
	
	size = (width * height) + width;
	grid = malloc(size * sizeof(char));
	if (grid == NULL || height <= 0 || width <= 0)
	{
		return (NULL);
	}
	for (ite = 0; ite < height; ite++)
	{
		for (kte = 0; kte < width; kte++)
		{
			*(grid + kte) = '0';
		}
		*(grid + kte) = '\n';
	}
	return (grid);
}
