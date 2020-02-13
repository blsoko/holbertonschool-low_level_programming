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
	int num3, num5, result;

	num3 = (1023 / 3);
	num3 = num3 * 3;

	num5 = (1023 / 5);
	num5 = num5 * 5;

	result = num3 + num5;
	printf("%d\n", result);
	return (0);
}
