#include "holberton.h"

/**
 * clear_bit - free list
 *
 * @n: number to bytes
 * @index: position
 *
 * Return: The newest node
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int ptr;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	ptr = 1 << index;
	*n = (*n & ~ptr) | ((0 << index) & ptr);
	return (1);
}
