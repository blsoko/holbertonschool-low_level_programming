
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
void integer(va_list a)
{
	printf("%d, ", va_arg(a, int));
}
void caracter(va_list a)
{
	printf("%c, ", va_arg(a, int));
}
void string(va_list a)
{
	if(a == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s, ", va_arg(a, char*));
}
void intfloat(va_list a)
{
	printf("%f, ", va_arg(a, double));
}

 void print_all(const char * const format, ...)
 {
     va_list record;
     int i = 0, j = 0;
	
	 op_t newstr[] = {
		{"i", integer},
		{"c", caracter},
		{"s", string},
		{"f", intfloat},
	};
	va_start(record, format);
	while (format[j] != 0)
	{
		while (i < 4)
		{
			if (newstr[i].op[0] == format[j])
			{
				(newstr[i].f)(record);
			}
			i++;
		}
		j++;
		i = 0;
	}
	va_end(record);
 }