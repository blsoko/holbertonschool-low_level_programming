#include "holberton.h"

/**
* print_number - return char
*
* @n: value
* Return: Always 0 (Success)
*/

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	while (n / 10)
	{
		print_number(n / 10);
		break;
	}
	_putchar((n % 10) + '0');
}
