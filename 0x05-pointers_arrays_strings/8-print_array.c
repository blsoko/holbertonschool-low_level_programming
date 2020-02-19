#include "holberton.h"
#include <stdio.h>
/**
 * print_array - check the code for Holberton School students.
 * @a: pointer
 * @n: size
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n ; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}

	}
	printf("\n");
}
