#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 * @size: value
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int n_size, column, row, alm;
	alm = 0;
	n_size = size;
	if (size > 0)
	{
		for (row = 0; row < n_size; row++)
		{
			for(column = 0; column < size; column++)
			{
				_putchar(' ');
				if (column == (size-1))
					while(alm < (n_size - size))
					{
						_putchar(35);
						alm++;
					}	
			}
			column = 0;
			size--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
