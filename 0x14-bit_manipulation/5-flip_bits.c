#include "holberton.h"

/**
 * flip_bits - free list
 *
 * @n: number to bytes
 * @m: position
 *
 * Return: The newest node
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int z;
	long int number = 0;

	for (z = n ^ m; z != 0; z = z >> 1)
	{
		number += z & 1;
	}
	return (number);
}
