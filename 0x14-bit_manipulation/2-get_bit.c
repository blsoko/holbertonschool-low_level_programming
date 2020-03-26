#include "holberton.h"

/**
 * get_bit - free list
 *
 * @n: number to bytes
 * @index: position
 *
 * Return: The newest node
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
