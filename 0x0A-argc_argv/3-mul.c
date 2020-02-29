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
	int i, mult = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
