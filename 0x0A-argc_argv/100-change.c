#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

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
	int cents = 0, number = 0, i = 0, num[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
		number = atoi(argv[1]);
		while (number != 0)
		{
		for (i = 0; i <= 5; i++)
		{
			if (number > num[i])
			{
				printf("%d\n", number);
				number -= num[i];
				cents++;
				break;
			}
			else
			{
				if (number % num[i] == 0)
				{
					printf("%d\n", number);
					number -= num[i];
					cents++;
					break;				}	}	}
		i = 0;		}	}
	printf("%d\n", cents);
	return (0);
	}}
