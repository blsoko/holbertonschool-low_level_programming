#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: value
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for(count = 0; count < n; count++)
		{
		_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
