#include <stdlib.h>
#include <stdio.h>
/**
 * liss - check
 *
 * @number: value
 *
 * Return: check;
 */

int liss(char *number)
{
	int i = 0;

	while (number[i] != '\0')
	{
		if (number[i] >= '0' && number[i] <= '9')
		{
			i++;
		}
		else
		{
			return (0); /*cero es no */
		}
	}
	return (1); /* uno es si */
}

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
	int i, add = 0;

	for (i = 1; i < argc; i++)
	{
		if (liss(argv[i]))
		{
			add += atoi(argv[i]);
		}
		else if (liss(argv[i]) == '0')
		{
			printf("0\n");
			return (0);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}
