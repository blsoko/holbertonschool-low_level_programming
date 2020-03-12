#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: number of args
 * @argv: arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int fvalue, svalue, answer = 0;

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (argc == 4)
	{
		fvalue = atoi(argv[1]);
		svalue = atoi(argv[3]);
		if (((*argv[2] == '/') && (svalue == 0)) || (*argv[2] == '%' && svalue == 0))
		{
			printf("Error\n");
			exit(100);
		}
		answer = get_op_func(argv[2])(fvalue, svalue);
		printf("%d\n", answer);
		return (0);
	}
	printf("Error\n");
	exit(98);
}
