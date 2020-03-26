#include "holberton.h"

/**
 * binary_to_uint - free list
 *
 * @b: bytes
 *
 * Return: The newest node
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		decimal += decimal + (b[i] - '0');
	}
	return (decimal);
}
