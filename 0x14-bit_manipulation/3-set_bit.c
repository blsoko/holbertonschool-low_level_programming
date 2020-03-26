#include "holberton.h"

/**
 * set_bit - free list
 *
 * @n: number to bytes
 * @index: position
 *
 * Return: The newest node
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}
