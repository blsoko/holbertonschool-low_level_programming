#include "holberton.h"

/**
 * _strlen_recursion - function
 * @s: value
 *
 * Return: value of function;
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) );
	}
	
}
