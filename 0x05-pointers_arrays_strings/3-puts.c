#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 * @str: pointer
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0' ; index++)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}
