#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 * @a: pointer
 * @b: pointer2
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
