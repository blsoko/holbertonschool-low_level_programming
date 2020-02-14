#include "holberton.h"
/**
* print_numbers - Entry point
*
* Return: Always 0 (Success)
*/
void print_numbers(void)
{
	int count;

	for (count = 48; count < 58; count++)
	{
		_putchar(count);
	}
	_putchar('\n');
}
