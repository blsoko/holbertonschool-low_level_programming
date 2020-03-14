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
int integer(va_list a)
{

}
char caracter(va_list a)
{

}
char string(va_list a)
{

}
float intfloat(va_list a)
{

}
void (*anything(char *s))(va_list a)
{
	struct funct newstr[] = {
		{"i", integer},
		{"c", caracter},
		{"s", string},
		{"f", intfloat},
		{NULL, NULL}
	};
	int i = 0;

	while (newstr[i].op != 0)
	{
		if (newstr[i].op[0] == s[0])
		{
			return (ops[i].f);
            return;
		}
		i++;
	}
}

 void print_all(const char * const format, ...)
 {
     va_list record;
     unsigned int i = 0;

     while(format[i])
     {
         anything(format)(record);
         i++;
     }
 }