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
	va_list record;

	va_start(record, n);
	for (i = 0; i < n; i++)
	{
		char *value = va_arg(record, char*);

		if (value == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", value);
		}
		if (separator != NULL && (i != (n - 1)))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(record);
}
