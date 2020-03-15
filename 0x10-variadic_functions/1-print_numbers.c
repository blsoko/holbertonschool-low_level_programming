#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 *
 * @separator: n
 * @n: value
 *
 * Return: Always 0 (Success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list record;

	va_start(record, n);
	if (separator == NULL)
	separator = "";
	for (i = 0; i < n - 1; i++)
	{
	printf("%d%s", va_arg(record, const unsigned int), separator);
	}
	printf("%d", va_arg(record, const unsigned int));
	printf("\n");
	va_end(record);
}
