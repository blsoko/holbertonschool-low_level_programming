#include "holberton.h"

/**
 * _print_rev_recursion - function
 * @s: value
 *
 * Return: value of function;
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		if (*s != '\0')
			_putchar(*s);
	}
}
