#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Entry point
 *
 * @n: value
 *
 * Return: Always 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list record;
	unsigned int i = 0;
	int sum = 0;

	va_start(record, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(record, int);
	}
	va_end(record);
	return (sum);
}
