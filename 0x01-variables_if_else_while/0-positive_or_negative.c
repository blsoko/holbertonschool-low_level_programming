#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%lu is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%lu is positive\n", n);
	}
	else
	{
		printf("%lu is zero\n", n);
	}
	return (0);
}
