#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 * @size: value
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int var_aux, column, row, alm;

	if (size > 0)
	{
	var_aux = 1;
	for (row = 0; row < size; row++)
	{
		for (column = var_aux; column < size; column++)
		{
			_putchar(' ');
		}
		for (alm = column; alm < (size + var_aux); alm++)
		{
			_putchar('#');
		}
		var_aux++;
		_putchar('\n');

	}
	}
	else
	{
		_putchar('\n');
	}
}

