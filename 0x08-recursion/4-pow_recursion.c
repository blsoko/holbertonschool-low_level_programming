#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - function
 * @x: value
 * @y: value
 *
 * Return: value of function;
 */

int _pow_recursion(int x, int y)
{
	if (y != 0)
	{
		if (y < 0)
		{
			return (-1);
		}
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (1);
}
