#include "holberton.h"

/**
 * process - function
 * @a: value
 * @b: value
 *
 * Return: Value of function;
 */
int process(int a, int b)
{
	if (a <= 1)
		return (0);
	else if (b == 2)
		return (1);
	else if (a % b == 0)
		return (0);
	return (process(a, b - 1));
}

/**
 * is_prime_number - function
 * @n: value
 *
 * Return: value of function;
 */

int is_prime_number(int n)
{
	return (process(n, n - 1));
}
