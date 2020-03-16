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

	va_start(record, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(record, int));
		if (separator != NULL && (i != (n - 1)))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(record);
}
