#include "holberton.h"

/**
 * _strlen_recursion - function
 * @s: value
 *
 * Return: value of function;
 */

int _strlen_recursion(char *s)
{
	if (*s != 0)
	{

		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
