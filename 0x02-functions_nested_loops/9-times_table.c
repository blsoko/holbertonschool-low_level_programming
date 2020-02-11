#include "holberton.h"

/**
* times_table - writes the character c to stdout
*
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

void times_table(void)
{
	int row, column, mx, fnum, snum;

	for (row = 0; row < 10; row++)
	{
	for (column = 0; column < 10; column++)
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
