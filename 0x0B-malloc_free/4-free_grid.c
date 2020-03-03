#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free memory
 *
 * @grid: array size
 * @height: array size
 *
 * Return: Always 0 (Success)
 */

void free_grid(int **grid, int height)
{
	int ite;

	for (ite = 0; ite < height; ite++)
	{
		free(grid[ite]);
	}
	free(grid);
}
