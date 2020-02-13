#include "holberton.h"

/**
* print_times_table - writes the character c to stdout
* @n: dwwd
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

void print_times_table(int n)
{
	int row, column, mx, fnum, snum;
	
	
	for (row = 0; row < n; row++)
	{
	for (column = 0; column < n; column++)
	{
		mx = (row * column);
		fnum = ((mx / 10) + '0');
		snum = ((mx % 10) + '0');
		if (fnum == '0')
		{
		if (column != 0)
		{
		_putchar(' ');
		_putchar(snum);
		}
		else
		{
		_putchar(snum);
		}
		}
		else
		{
		_putchar(fnum);
		_putchar(snum);
		}
		if (column != 9)
		{
		_putchar(',');
		_putchar(' ');
		}

	}
		_putchar('\n');
	}
}
