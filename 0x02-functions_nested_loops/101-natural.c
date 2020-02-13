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
	int count, nm_3, nm_5, result;

	for (count = 0; count < 1024; count++)
	{
		if (count % 3 == 0)
		{
			nm_3 += count;
		}
		else if (count % 5 == 0)
		{
			nm_5 += count;
		}
	}

	result = nm_3 + nm_5;
	printf("%d\n", result);
	return (0);
}
