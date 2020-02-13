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
	long int f1, f2, result;
	int count;

	printf("1, ");
	printf("2, ");
	f1 = 1;
	f2 = 2;
	for (count = 0; count < 48; count++)
	{
		result = f1 + f2;
		f1 = f2;
		f2 = result;
		if (count != 47)
		{
			printf("%ld, ", result);
		}
		else
		{
			printf("%ld", result);
		}
	}
	printf("\n");
	return (0);
}
