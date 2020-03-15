#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Entry point
 *
 * @separator: n
 * @n: value
 *
 * Return: Always 0 (Success)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *value;
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
	value = va_arg(record, char*);
	if (value == NULL)
	{
		value = "(nil)";
	}
	printf("%s%s", value, separator);
	}
	 printf("%s", va_arg(record, char*));
	printf("\n");
	va_end(record);
}
