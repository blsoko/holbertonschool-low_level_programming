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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
