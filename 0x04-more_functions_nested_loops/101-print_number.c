#include "holberton.h"
#include <stdio.h>
/**
  * print_number(int n) - Entry point
  * @n: :( 
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int a, n, potencia, last, store, boolean;
	n = -98027;
	if (n < 0)
	{
		n *= -1;
		printf("-\n");
		printf("%d\n", n);
	}
	a = 0;
	potencia = 10;
	while (1 > a)
	{
		n /= potencia;
		potencia *= 10;
		last %= n;
		if (n >= 0 && n < 10)
		{
			printf("%d\n", n);
			a = 1;
		}
		else
		{
			printf("%d", last);
		}
	}	



}
