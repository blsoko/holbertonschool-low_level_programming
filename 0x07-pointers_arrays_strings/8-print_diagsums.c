#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - to another
 * @size: tama;o
 * @a: array pointer
 *
 * Return: a multidemnsional array
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int result1 = 0;
	int result2 = 0;

	for (i = 0; i < size; i++)
	{
		result1 += (a + i * size)[i];
	}
	for (j = 0; j < size; j++)
	{
		result2 += (a + j * size)[--i];
	}
	printf("%d, %d\n", result1, result2);
}
