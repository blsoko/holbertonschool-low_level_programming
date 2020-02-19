#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 * @str: pointer
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int index, count;

	for (index = 0; str[index] != '\0' ; index++)
	{
	}

	for (count = (index / 2); count <= index; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
