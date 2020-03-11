#include "holberton.h"

/**
 * print_name - Entry point
 *
 * @name: value
 * @f: value
 *
 * Return: Always 0 (Success)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
