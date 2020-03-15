#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
int _putchar(char c);
/**
 * struct old - Entry point
 *
 * @op: n
 * @f: value
 *
 * Return: Always 0 (Success)
 */
typedef struct old
{
	    char *op;
	    void (*f)(va_list);
} op_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif /* HOLBERTON */
