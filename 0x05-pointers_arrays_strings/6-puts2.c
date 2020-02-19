#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str: pointer
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int index, count;

	for (index = 0; str[index] != '\0' ; index++)
	{
	}
	index--;

	for (count = 0; count <= index; count += 2)
	{
		if (count < index)
		{
			_putchar(str[count]);
		}
	}
	_putchar('\n');
}
