#include "holberton.h"

/**
* jack_bauer - writes the character c to stdout
*
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

void jack_bauer(void)
{
	int j, k, contador;

	for (contador = 0; contador <= 23 ; contador++)
	{
	for (j = 48; j < 54; j++)
	{
	for (k = 48; k < 58; k++)
	{
		_putchar((contador / 10) + '0');
		_putchar((contador % 10) + '0');
		_putchar(':');
		_putchar(j);
		_putchar(k);
		_putchar('\n');
	}
	}
	}
	}
