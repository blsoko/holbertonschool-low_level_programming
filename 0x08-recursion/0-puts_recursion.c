#include "holberton.h"

/**
 * _puts_recursion - function
 * @s: value
 *
 * Return: value of function;
 */

void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);
	i++;
	if (s[i] != '\0')
	{
		_puts_recursion(s + i);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
