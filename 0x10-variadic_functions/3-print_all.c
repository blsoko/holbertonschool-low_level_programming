
#include <stdio.h>
#include "variadic_functions.h"
/**
 * integer - Entry point
 *
 * @a: value
 *
 * Return: Always 0 (Success)
 */
void integer(va_list a)
{
	printf("%d", va_arg(a, int));
}
/**
 * caracter - Entry point
 *
 * @a: value
 *
 * Return: Always 0 (Success)
 */
void caracter(va_list a)
{
	printf("%c", va_arg(a, int));
}
/**
 * string - Entry point
 *
 * @a: value
 *
 * Return: Always 0 (Success)
 */
void string(va_list a)
{
	if (a == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", va_arg(a, char*));
}
/**
 * intfloat - Entry point
 *
 * @a: value
 *
 * Return: Always 0 (Success)
 */
void intfloat(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
 * print_all - Entry point
 *
 * @format: n
 *
 * Return: Always 0 (Success)
 */
void print_all(const char * const format, ...)
{
	va_list record;
	int i = 0, j = 0;
	char *space = "";
	op_t newstr[] = {
		{"i", integer},
		{"c", caracter},
		{"s", string},
		{"f", intfloat},
	};
	va_start(record, format);
	while (format && format[j])
	{
		while (i < 4)
		{
			if (newstr[i].op[0] == format[j])
			{
				printf("%s", space);
				(newstr[i].f)(record);
				space = ", ";
				break;
			}
			 i++;
		}
		j++;
		i = 0;
	}
	printf("\n");
	va_end(record);
}
