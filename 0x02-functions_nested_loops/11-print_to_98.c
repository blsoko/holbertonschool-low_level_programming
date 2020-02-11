#include <stdio.h>
#include "holberton.h"

/**
* print_to_98 - writes the character c to stdout
* @n: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("98");
	}
	else if (n < 98)
	{
	for (; n < 98; n++)
	{
		printf("%d, ", n);
		if (n == 97)
		{
			printf("98");
		}
	}
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
			if (n == 99)
			{
				printf("98");
			}
		}
	}
	printf("\n");

}
