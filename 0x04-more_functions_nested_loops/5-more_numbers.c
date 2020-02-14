#include "holberton.h"
/**
* more_numbers - Entry point
*
* Return: Always 0 (Success)
*/
void more_numbers(void)
{
	int count, count2;

	for (count = 0; count < 10; count++)
	{
		for (count2 = 0; count2 < 15; count2++)
		{
			if (count2 > 9)
			{
				_putchar((count2 / 10) + '0');
			}
			_putchar((count2 % 10) + '0');
		}
		_putchar('\n');
	}
}
