#include "holberton.h"
#include "stdio.h"
/**
 * print_rev - check the code for Holberton School students.
 * @s: pointer
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int index, ount;

	for(index = 0; s[index] != '\0' ; index++)
	{
	}
	index--;
	
	for(ount = index; ount >= 0 ; ount--)	
	{
		_putchar(s[ount]);
	}
	_putchar('\n');
}
