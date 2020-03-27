#include "holberton.h"

/**
 * get_endianness - free list
 *
 * Return: 0 big 1 little
 */
int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *)&i;
	if (*c)
		return (1);
	else
		return (0);
	return (0);
}
