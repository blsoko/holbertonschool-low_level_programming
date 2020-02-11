#include "holberton.h"

/**
* print_last_digit - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int print_last_digit(int c)
{
	int tmp;

	if (c < 0)
	{
	tmp = (c * -1);
	_putchar(tmp % 10 + '0');
	return (tmp % 10);

	}
	else
	{
		_putchar(c % 10 + '0');
		return (c % 10);
	}
}

