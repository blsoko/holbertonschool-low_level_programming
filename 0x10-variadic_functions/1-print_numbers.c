#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 *
 * @separator: value
 * @n: valueddd
 *
 * Return: Alwaydds 0 (Success)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list record;

	if (n == 0)
	{
		return;
	}
	va_start(record, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n - 1; i++)
	{
		printf("%i%s", va_arg(record, int), separator);
	}
	printf("%i", va_arg(record, int));
	printf("\n");
	va_end(record);
}
