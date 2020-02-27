#include "holberton.h"

/**
 * process - function
 * @a: value
 * @b: value
 *
 * Return: value of function;
 */

int process(int a, int b)
{
	if ((b * b) > a)
	{
		return (-1);
	}
	else if ((b * b) == a)
	{
		return (b);
	}
	return (process(a, b + 1));
}
/**
 * _sqrt_recursion - function
 * @n: value
 *
 * Return: value of function;
 */


int _sqrt_recursion(int n)
{
	return (process(n, 0));
}
