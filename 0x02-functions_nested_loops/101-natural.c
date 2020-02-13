#include "holberton.h"
#include <stdio.h>

/**
* main - writes the character c to stdout
*
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int main(void)
{
	int nm_3, count;

	for (count = 0; count < 1024; count++)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			nm_3 += count;
		}
	}

	printf("%d\n", nm_3);
	return (0);
}
