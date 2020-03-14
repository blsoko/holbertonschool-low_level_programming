#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Entry point
 *
 * @array: n
 * @size: size
 * @action: value
 *
 * Return: Always 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
    va_list record;
    unsigned int i, sum = 0;

    va_start(record, n);

    for (i = 0; i < n; i++)    
    {
        sum += va_arg(record, const unsigned int);
    }
    va_end(record);
    return (sum);
}