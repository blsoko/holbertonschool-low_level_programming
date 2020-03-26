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
	return (*n |= (1 << index));
}
