#include <stdlib.h>
#include <stdio.h>

/**
 * main - check
 *
 * @argc: value
 * @argv: value
 *
 * Return: check;
 */

int main(int argc, char *argv[])
{
	int cents = 0;
	int num[5] = {25, 10, 5, 2, 1};
	int number = atoi(argv[1]);
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	if (number < 0)
	{
		printf("0\n");
		return (0);
	}
	while (number != 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (number % num[i] == 0)
			{
				cents++;
				number -= num[i];
				break;
			}
		}
	}
	printf("%d\n", cents);
	return (0);
	}
	return (0);
}
