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
	int i, mult = 0;

	if (*argv[1] >= '0' && *argv[1] <= '9')
	{
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				mult += atoi(argv[i]);
			}
		}
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
	}
	else
	{
	printf("0\n");
	return (0);
	}
}
