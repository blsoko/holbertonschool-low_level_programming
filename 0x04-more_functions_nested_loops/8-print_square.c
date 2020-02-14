#include "holberton.h"
/**
* print_square - Entry point
* @size: size
*
* Return: Always 0 (Success)
*/
void print_square(int size)
{
	int column, row;

	if (size > 0)
	{
	for (column = 0; column < size; column++)
	{
		_putchar(35);
		for (row = 1; row < size; row++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
