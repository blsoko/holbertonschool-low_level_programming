#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 11; j++)
	{
	for (i = 97; i < 123; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
	}
}
