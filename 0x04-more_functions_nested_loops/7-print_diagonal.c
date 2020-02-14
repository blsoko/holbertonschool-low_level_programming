#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: value
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int count, ntimes, contador;

	contador = 0;
	if (n > 0)
	{
	for (ntimes = 0; ntimes < n; ntimes++)
	{
		for (count = 0; count < contador; count++)
		{
		if (contador != 0)
		{
		_putchar(' ');
		}
		}
		count = 0;
		if (contador == n)
		{
			count = n;
		}
		contador++;
		_putchar(92);
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
