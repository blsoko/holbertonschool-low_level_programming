#include "holberton.h"

/**
 * print_binary - free list
 *
 * @n: number to bytes
 *
 * Return: The newest node
 */
void print_binary(unsigned long int n)
{
	unsigned long int ref = 0;
	long int i = 0;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 31; i >= 0; i--)
	{
		ref = n >> i;
		if (ref & 1 || flag == 1)
		{
			flag = 1;
			if (ref & 1)
			{
				_putchar('1');
			}
			else
			{
				_putchar('0');
			}
		}
	}
}
